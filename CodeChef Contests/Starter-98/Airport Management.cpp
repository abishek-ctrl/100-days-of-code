#include <bits/stdc++.h>
#define lli long long int
#define pb push_back
#define po pop_back
#define mp make_pair
#define cases lli testcases;cin>>testcases; while(testcases--)
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cases{
        int n;
        cin >> n;
        vector<int> a(n), d(n);
        map<int,int> mp;
        int res=0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        for (int i = 0; i < n; i++) {
            cin >> d[i];
            mp[d[i]]++;
        }
        for(int x:a){
            mp[x]++;
        }
        for(auto it:mp){
            res=max(res,it.second);
        }
        cout<<res<<'\n';
    }
    return 0;
}