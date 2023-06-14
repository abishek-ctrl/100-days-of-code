class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int n=nums.size();
        int c=0;
        for(int i=0;i<n;i++){
            int j=i+1,k=n-1;
            while(j<k){
                int a=nums[j]-nums[i];
                int b=nums[k]-nums[j];
                if(a==diff and b==diff){
                    c++;
                    j++;
                    k--;
                }else if(a<diff) j++;
                else k--;
            }
        }
        return c;
    }
};