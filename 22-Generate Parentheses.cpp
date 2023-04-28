class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans; //We define a string vector for output
        backtrack(ans,"",0,0,n); //We call the backtrack function with 4 arguments
        return ans; //We return the ans vector
    }
    
    //The Backtrack function is used to collect the combinations of all parentheses
    void backtrack(vector<string>&ans,string curr,int open,int close,int n){ 
        if(close==n){ //If the number of close parentheses is equal to the 'n'
            ans.push_back(curr); //then we push the combinations collected to the 'ans' 
            return; 
        }
        if(open<n){ //If the open parentheses are less than 'n'
            backtrack(ans,curr+"(",open+1,close,n);// then we call the backtrack function again by increase the open value by 1 and adding a "(" to the 'curr' string
        }
        if(close<open){ //If the close parenthese are less than the open parentheses 
            backtrack(ans,curr+")",open,close+1,n); //then we call the backtrack function again by increase the close value by 1 and adding a ")" to the 'curr' string
        }  
    }
};
