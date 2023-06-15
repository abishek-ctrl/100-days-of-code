class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int r=grid.size(), c=grid[0].size() , res=0;
        map<vector<int>,int>v;
        for(vector<int> row:grid){
            v[row]++;
        }
        for(int i=0;i<r;i++){
            vector<int> col={};
            for(int j=0;j<c;j++){
                col.push_back(grid[j][i]);
            }
            res+=v[col];
        }
        return res;        
    }
};