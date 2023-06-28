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
        int n,x,k,p;
        cin>>n>>x>>k>>p;
        int ans=p;
        if(k==n){
            ans+=20;
        }
        if(k>x){
            int inc=x*10;
            int bon=(k-x)*5;
            ans+=inc;
            ans+=bon;
            
        }
        else if(k==x){
            int inc=x*10;
            ans+=inc;
        }else if(k<x){
            int inc=k*10;
            ans+=inc;
        }
        cout<<ans<<'\n';
        
    }
    return 0;
}