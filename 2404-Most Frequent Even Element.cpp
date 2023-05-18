class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int> freq;
        int n=nums.size();
        int res=-1,high=0;
        for(auto i:nums){
            freq[i]++;
        }
        for(auto i:freq){
            if(i.first%2==0 and i.second>high){
                high=i.second;
                res=i.first;
            }
        }
        return res;
    }
};
