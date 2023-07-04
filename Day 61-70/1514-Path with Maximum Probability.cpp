class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        vector<vector<pair<int,double>>> adj(n,vector<pair<int,double>> ());
        vector<double> dp(n,0);
        for(int i=0;i<edges.size();++i){
            adj[edges[i][0]].push_back({edges[i][1],succProb[i]});
            adj[edges[i][1]].push_back({edges[i][0],succProb[i]});
        }
        queue<int> q;
        q.push(start);
        dp[start]=1;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(auto u:adj[node]){
                double prob=dp[node]*u.second;
                if(prob>dp[u.first]){
                    q.push(u.first);
                    dp[u.first]=prob;
                }
            }
        }
        return dp[end];
    }
};