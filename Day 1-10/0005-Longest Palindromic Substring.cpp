class Solution {
public:
    string longestPalindrome(string s) {
        //Defining the output string
        string res = "";
        //The substring length
        int reslen = 0;
        int n = s.size();

        //Loop through the string s
        for (int i = 0; i < n; i++) {
            // For Odd Length
            int l = i, r = i;
            //The left should be >= zero and right should be less than n
            //and both s[l] and s[r] should be equal to ensure palindrome
            while (l >= 0 && r < n && s[l] == s[r]) { 
                //if the current length is greater than already stored length
                if ((r - l + 1) > reslen) {
                    //update 'res' to the substring
                    res = s.substr(l, r - l + 1);
                    //update the new length in 'reslen'
                    reslen = r - l + 1;
                }
                //increment and decrement the left and right pointers
                l--;
                r++;
            }

            // Even Length
            l = i, r = i + 1;
            while (l >= 0 && r < n && s[l] == s[r]) {
                if ((r - l + 1) > reslen) {
                    res = s.substr(l, r - l + 1);
                    reslen = r - l + 1;
                }
                l--;
                r++;
            }
        }

        return res;
    }
};
