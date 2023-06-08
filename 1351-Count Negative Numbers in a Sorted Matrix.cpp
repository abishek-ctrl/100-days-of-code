//Brute-Force Approach
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]<0) count++;
            }
        }
        return count;
    }
};

//Optimised Approach
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        int c=0,r=n-1;
        int count=0;
        while(c<m and r>=0){
            if(grid[r][c]<0){
                r--;
                count+=m-c;
            }else c++;
        }
        return count;
    }
};