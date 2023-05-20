class Solution {
public:
    unordered_map<string,vector<pair<string,double>>> adjList;
    vector<double> ans;
    bool dfs(string& divident,string& divisor, unordered_set<string> vis,const double& currprod){
        if(vis.find(divident)!=vis.end()) return false;
        vis.insert(divident);
        if(divident==divisor){
            ans.push_back(currprod);
            return true;
        }
        bool found=false;
        for(auto v: adjList[divident]){
            found=dfs(v.first,divisor,vis,currprod*v.second);
            if(found) return true;
        }
        return false;
    }
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        int n=equations.size(),m=queries.size();
        adjList.clear();
        ans.clear();
        for(int i=0;i<n;i++){
            string divident=equations[i][0];
            string divisor=equations[i][1];
            adjList[divident].push_back({divisor,values[i]});
            adjList[divisor].push_back({divident,1.0/values[i]});
        }
        for(auto q :queries){
            string divident=q[0];
            string divisor=q[1];
            if(adjList.find(divident)==adjList.end() or adjList.find(divisor)==adjList.end()){
                ans.push_back(-1.0);
            }else{
                unordered_set<string> vis;
                if(!dfs(divident,divisor,vis,1.0)){
                    ans.push_back(-1.0);
                }
            }
        }
        return ans;
    }
};