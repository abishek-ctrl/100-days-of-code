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
    int a,b,x,y;
    cin>>a>>b>>x>>y;
    int m=(a*2)+b;
    int r=(x*2)+y;
    if(m>r) cout<<"Messi"<<'\n';
    else if(r>m) cout<<"Ronaldo"<<'\n';
    else cout<<"Equal"<<'\n';
    return 0;
}