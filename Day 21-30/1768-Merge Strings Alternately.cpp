class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res="";
        int i=0;
        for(i;i<min(word1.size(),word2.size());i++){
            res+=word1[i];
            res+=word2[i];
        }
        res+=word1.substr(i);
        res+=word2.substr(i);
        return res;
        }
    };