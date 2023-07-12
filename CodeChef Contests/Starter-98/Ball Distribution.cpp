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
        int n,m;
        cin>>n>>m;
        vector<int> c(m);
        for(int i=0;i<m;i++){
            cin>>c[i];
        }
        int box=n,cc=0;
        for(int i:c){
            if(i==n) continue;
            if(cc>0){
                int a=i;
                a-=min(i,cc);
                while(box>a){
                    box--;
                    cc++;
                }
            }else{
                int a=box-i;
                cc+=a;
                box-=a;
            }
            if(box<=0) break;
        }
        if(box<0) box=0;
        cout<<box<<'\n';
    }
    return 0;
}