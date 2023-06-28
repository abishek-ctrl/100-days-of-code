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
        int n,m,k;
        cin>>n>>m>>k;
        int flag=1;
        while(n--){
            int temp;
            cin>>temp;
            if(temp+k>m+1){
                flag=0;
                continue;
            }
        }if(flag==1)cout<<"Yes"<<'\n';
        else cout<<"No"<<'\n';
    }
    return 0;
}