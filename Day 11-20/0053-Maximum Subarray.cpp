class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //defining the current sum and the max sum to the first element
        int maxSum=nums[0];
        int currSum=nums[0];
        //looping from the first element of the nums array
        for(int i=1;i<nums.size();i++){
        //update which is larger - current element or the sum of current element with the current sum
            currSum=max(nums[i],nums[i]+currSum);
        //update which is larger - current sum or the max sum that we already defined
            maxSum=max(currSum,maxSum);
        }
        return maxSum; 
    }
};
