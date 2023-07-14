class Solution {
public:
    int longestSubsequence(vector<int>& arr, int diff){
        int count=1;
        int n=arr.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            int temp=arr[i];
            if(mp.find(temp-diff)!=mp.end()){
                mp[temp]=mp[temp-diff]+1;
            }else mp[temp]=1;
            count=max(count,mp[temp]);
        }
        return count;
    }
};