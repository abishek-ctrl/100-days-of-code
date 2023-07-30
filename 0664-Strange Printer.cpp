class Solution {
public:
    int solve(string& s, int i,int j, vector<vector<int>>& dp){
        if(i==j) return 1;
        if(dp[i][j]!=-1) return dp[i][j];
        
        int mint=INT_MAX;
        
        for(int k=i;k<j;k++){
            mint=min(mint,solve(s,i,k,dp)+solve(s,k+1,j,dp));
        }
        return dp[i][j]= (s[i]==s[j])? mint-1 :mint;
    }
    int strangePrinter(string s) {
        int n=s.size();
        vector<vector<int>> dp(n,vector<int>(n,-1));
        return solve(s,0,n-1,dp);
    }
};