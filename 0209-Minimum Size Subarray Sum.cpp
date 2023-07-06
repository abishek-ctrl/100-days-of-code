class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int i=0,j=0;
        int mn=INT_MAX;
        int sum=0;
        while(j<n){
            sum+=nums[j];
            while(sum>=target){
                sum-=nums[i];
                mn=min(j-i+1,mn);
                i++;
            }
            j++;
        }
        if(mn==INT_MAX) return 0;
        return mn;
    }
};