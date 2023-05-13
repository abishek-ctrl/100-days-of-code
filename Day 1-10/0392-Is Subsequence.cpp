class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j=0; //Initialise a variable j
        int n=s.size(),m=t.size(); //Take the length of s and t 
        for(int i=0;i<m and j<n;i++){ //Loop till the strings are traversed
            if(s[j]==t[i]) j++; //If both the characters are equal, increase j 
        }
        return(j==n); // return if j is equal to n with a boolean value
    }
};
