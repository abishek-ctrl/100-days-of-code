class Solution {
public:
    bool buddyStrings(string s, string g) {
        int n=s.size();
        if(s==g) return (set<char>(s.begin(), s.end())).size()<s.size();
        if(s.size()!=g.size()) return 0;
        int l=0,r=n-1;
        while(l<=r and s[l]==g[l])
            l++;
        while(r>=0 and s[r]==g[r])
            r--;
        if(l<r) swap(s[l],s[r]);
        
        return s==g;
    }
};