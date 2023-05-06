class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0,j=0; //we take two pointers
        while(i<nums.size()){ //till 'i' is less than 'nums' size
            if(nums[i]!=val){ //if they are not equal
                nums[j]=nums[i];//overwrite value in 'j' index to the one in 'i' index
                j++;//we increment 'j' to note the number of modified elements
            }
            i++;//if they are equal, we move to next element
        }
        return j;//return the length of the modified array with 'val' removed
    }
};
