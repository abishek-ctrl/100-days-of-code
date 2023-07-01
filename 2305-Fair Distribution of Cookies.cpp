class Solution {
public:
    vector<int>v;
    int ans;
    void solve(vector<int>&c,int k,int index){
        if(index == c.size()){
            int total = INT_MIN;
            for(int i=0;i<k;i++){
                total = max(total,v[i]);
            }
            ans = min(ans,total);
            return;
        }
        for(int i=0;i<k;i++){
            v[i] += c[index];
            solve(c,k,index+1);
            v[i] -= c[index];
        }
    }
    int distributeCookies(vector<int>& c, int k) {
        ans = INT_MAX;
        v.resize(k,0);
        solve(c,k,0);
        return ans;
    }
};