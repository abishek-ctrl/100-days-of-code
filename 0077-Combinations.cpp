class Solution {
public:
    void solve(vector<vector<int>>& v, vector<int>& temp, int start, int n, int k){
        if(k==0){
            v.push_back(temp);
            return;
        }
        for(int i=start;i<=n;i++){
            temp.push_back(i);
            solve(v,temp,i+1,n,k-1);
            temp.pop_back();
        }
}
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> v;
        vector<int> temp;
        solve(v,temp,1,n,k);
        return v;
    }
};