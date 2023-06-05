class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> res;
        map<int,int> freq;
        int n=nums.size();
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        for(auto i: freq){
            if(i.second>n/3) res.push_back(i.first);
        }
        return res;
    }
};
