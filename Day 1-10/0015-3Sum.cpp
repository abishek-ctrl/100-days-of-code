class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> tsum; 
        int n=nums.size();
        sort(nums.begin(),nums.end()); //We sort the given array
        
        for(int i=0;i<n-2;i++){        //We loop 'i' till the last 3rd element
            
            if(i>0 and nums[i]==nums[i-1]) continue; //We continue if there are duplicates.
            int target= -nums[i];      
            int l=i+1, r=n-1;           //We initialise the two pointers 'l' and 'r';
            if(nums[l]+nums[l+1]>target) continue;  //If smallest ones are larger,we skip
            else if (nums[r]+nums[r-1]<target)continue;//If largest ones are smaller,we skip
            while(l<r){                 
                int total=nums[l]+nums[r]; //Add the small and big value
                if(total<target) l++;       //If Small,we increase 'l' value
                else if(total>target) r--; // If large, we decrease 'r' value
                else{                       //This indicates it is equal to one another
                    tsum.push_back({nums[i],nums[l],nums[r]});  // We push it to the result vector
                    while((l<r) and nums[l]==nums[l+1]) l++;    //If duplicates, move on
                    while((l<r) and nums[r]==nums[r-1]) r--;
                    l++; //Increase 'l'
                    r--;//decrease 'r'
                }
            }
        }
        return tsum;
    }
};
