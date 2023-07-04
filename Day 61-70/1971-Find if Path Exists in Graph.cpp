class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int,vector<int>> graph;
        for(auto e : edges){
            graph[e[0]].push_back(e[1]);
            graph[e[1]].push_back(e[0]);
        }
        queue<int> q;
        vector<int> vis(n,0);
        q.push(source);
        vis[source]=1;
        while(!q.empty()){
            int curr=q.front();
            q.pop();
            if(curr==destination){
                return true;
            }
            for(int child: graph[curr]){
                if(vis[child]==0){
                    q.push(child);
                    vis[child]=1;
                }
            }
        }
        return false;
    }
};