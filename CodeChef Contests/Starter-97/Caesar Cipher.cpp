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
        string s,t,u;
        string res;
        cin>>s;
        cin>>t;
        cin>>u;
        int diff=0;
        for(int i=0;i<n;i++){
            diff=t[i]-s[i];
            u[i]='a'+(u[i]-'a'+diff + 26) % 26; 
        }
        cout<<u<<'\n';
    }
    return 0;
}