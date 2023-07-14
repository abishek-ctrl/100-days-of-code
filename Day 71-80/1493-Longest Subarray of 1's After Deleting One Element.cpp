class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int zero=0,res=0,start=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0)
                zero+=1;
            while(zero>1){
                if(nums[start++]==0)
                    zero-=1;
            }
            res=max(res,i-start);
        }
        return res;
    }
};