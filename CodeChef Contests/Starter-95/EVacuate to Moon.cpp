#include <bits/stdc++.h>
#define lli long long int
#define pb push_back
#define po pop_back
#define mp make_pair
#define cases lli testcases;cin>>testcases; while(testcases--)
using namespace std;

void solve(){
    lli n,m,h;
    cin >> n >> m >> h;
    vector<lli> a(n), b(m);
    lli temp=0;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<m;i++){
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    lli ccount=n-1, ocount=m-1, mvar1=0;
    while(ccount >= 0 && ocount >= 0){
        lli tempa=a[ccount];
        lli tempb=b[ocount];
        mvar1+=min(tempa, tempb*h);
        ccount--;
        ocount--;
    }
    lli mvar2=0;
    ccount=0;
    ocount=0;
    while(ccount < n && ocount < m){
        lli ta=a[ccount];
        lli tb=b[ocount];
        mvar2+=min(ta, tb*h);
        ccount++;
        ocount++;
    }
    cout << max(mvar1, mvar2) << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cases{
        solve();
    }
    return 0;
}