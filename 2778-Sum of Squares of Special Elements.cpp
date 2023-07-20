class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n=nums.size();
        int sum=nums[0]*nums[0];
        for(int i=1;i<n;i++){
            if(n%(i+1)==0) sum+=nums[i]*nums[i];
        }
        return sum;
    }
};