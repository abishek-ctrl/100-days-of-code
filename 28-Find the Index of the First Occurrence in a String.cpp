class Solution {
public:
    int strStr(string haystack, string needle) {
        //define the string length of both of the haystack and the needle
        int n = haystack.length();
        int m = needle.length();
        //if the needle is zero, then return zero
        if (m == 0) {
            return 0;
        }
        
        for (int i = 0; i < n - m + 1; i++) {
            int j = 0; 
            while (j < m && haystack[i + j] == needle[j]) {
                j++;
            }
            if (j == m) {
                return i;
            }
        }
        
        return -1;
    }
};
