class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size(),s=0;
        int sum=((n+1)*n)/2;
        for(int i=0;i<n;i++){
            s+=nums[i];
        }
        int d=sum-s;
        return d;
    }
};