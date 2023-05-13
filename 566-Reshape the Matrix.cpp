class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m=mat.size();
        int n=mat[0].size();
        if(m*n!=r*c) return mat;
        vector<vector<int>> result(r,vector<int>(c));
        int i=0,j=0;
        for(int k=0;k<m;k++){
            for(int l=0;l<n;l++){
                result[i][j]=mat[k][l];
                j++;
                if(j==c){
                    i++;
                    j=0;
                }
            }
        }
        return result;
    }
};
