class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> mp;
        vector<int> res;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        int c=0;
        for(auto& it:mp){
            if(it.second==1 and c!=2){
                res.push_back(it.first);
                c++;
            }
        }
        return res;
    }
};