#include <bits/stdc++.h>
#define lli long long int
#define pb push_back
#define po pop_back
#define mp make_pair
#define cases lli testcases;cin>>testcases; while(testcases--)
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cases{
        int n;
        cin>>n;
        string s;
        cin>>s;
        lli count=0;
        for (int i = 0; i < n - 1; i++) {
            if (s[i] == ':' && s[i + 1] == ')') {
                int j = i + 2;
                bool hasLeftParentheses = false;
                bool smileyFound = true;
    
                while (j < n && s[j] != ':') {
                    if (s[j] == '(') {
                        hasLeftParentheses = true;
                        break;
                    } else if (s[j] != ')') {
                        smileyFound = false;
                        break;
                    }
                    j++;
                }
    
                if (smileyFound && !hasLeftParentheses) {
                    count++;
                }
            }
        }
        cout<<count<<'\n';
    }
    return 0;
}