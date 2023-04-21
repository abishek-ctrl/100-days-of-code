class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end()); //We sort the array
        int res=nums[0]+nums[1]+nums[2]; //Initialise a result sum
        for(int i=0;i<n-2;i++){ //Loop till Last 3rd element
            int l=i+1,r=n-1; //Initialise the left and right pointers
            while(l<r){
                int sum=nums[i]+nums[l]+nums[r]; //Calculate current sum
                int dif=abs(sum-target);  //Calculate diff between sum and target
                if(dif<abs(res-target))res=sum; //Check if the current diff is smaller than previous diff
                if(sum<target){ //If sum smaller than target ,increment 'l' pointer
                    l++;
                }else if(sum>target){// If sum larger than target, decrement 'r' pointer
                    r--;
                }else{ //If equal , return the target which is equal to the sum as well.
                    return target;
                    }
            }
        }
        return res;
    }
};
