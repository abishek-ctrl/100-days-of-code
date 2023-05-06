class Solution {
public:
    int const mod=1e9+7; //defining the modulus
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end()); //sorting the 'nums' array
        //defining the necessary variables including the left and right pointers
        int count=0;        
        int l=0,r=nums.size()-1;
        vector<int> power(nums.size()); //having vector power to hold the power values
        power[0]=1; //for 0, 2^0 =1
        
        //this returns the number of substrings a string has,
        for(int i=1;i<nums.size();i++){ //loop till the length of array
            power[i]=(power[i-1]*2)%mod; //initialising the power of ith element by multiplying the previous element(i-1) with 2 and taking a mod to keep the range
        }
        
        while(l<=r){ 
            if(nums[l]+nums[r]>target) r--; //if greater than target, decrement the right pointer
            else{
                count+=power[r-l]; //increment the count with the power of 'r-l' the substring length
                count%=mod;        //we decrement the count value to keep it in range through mod
                l++;               //increment the left pointer 
            }
        }
        return count;
    }
};
