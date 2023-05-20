class Solution {
public:
    vector<int> circularGameLosers(int n, int k) {
        int i=0,j=1;
        vector<int> vis(n,0);
        while(1){
            if(vis[i]==1) break;
            vis[i]=1;
            i=(i+j*k)%n;
            j++;
        }
        vector<int> res;
        for(int i=0;i<vis.size();i++){
            if(vis[i]==0) res.push_back(i+1);
        }
        return res;
    }
};