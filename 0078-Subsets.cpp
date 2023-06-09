class Solution {
public:
    void combo(const vector<int>& nums, vector<int>& temp,int currind,vector<vector<int>>& res){
        res.push_back(temp);
        for(int i=currind;i<nums.size();i++){
            temp.push_back(nums[i]);
            combo(nums,temp,i+1,res);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        vector<int> temp;
        combo(nums,temp,0,res);
        return res;
    }
};