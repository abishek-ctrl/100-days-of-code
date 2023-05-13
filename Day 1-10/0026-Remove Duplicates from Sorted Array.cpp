class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s; //Defining a set to remove the duplicates
        for(int x : nums) {
            s.insert(x); //Inserting the nums values into the set 's'
        }
        
        int i = 0; 
        for(int num : s) {
            nums[i++] = num; //we update the nums value
        }
        
        return s.size();
    }
};
