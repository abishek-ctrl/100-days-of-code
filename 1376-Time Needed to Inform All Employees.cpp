class Solution {
public:
    int dfs(int& headID,vector<int> adj[],vector<int>& informTime){
        int maxtime=0;
        for(auto it:adj[headID]) maxtime=max(maxtime,dfs(it,adj,informTime));
        return informTime[headID]+maxtime;
    }
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        vector<int> adj[100005];
        for(int i=0;i<manager.size();i++){
            if(manager[i]!=-1) adj[manager[i]].push_back(i);
        }
        return dfs(headID,adj,informTime);
    }
};