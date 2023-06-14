class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k=0;
        int n=nums.size();
        while(k<n){
            if(nums[k]==0) break;
            else k++;
        }
        int i=k,j=k+1;
        while(i<n and j<n){
            if(nums[j]!=0){
                nums[i]=nums[j];
                nums[j]=0;
                i++;
            }else j++;
        }
    }
};