class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        //Simple for loop and increment problem
        for(int i=1;i<nums.size();i++){
            nums[i]+=nums[i-1];
        }
        return nums;
    }
};
