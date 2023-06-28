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
        int a,b;
        cin>>a>>b;
        int c=a*b;
        int s=a+b;
        cout<<abs(c-s)<<'\n';
    return 0;
}