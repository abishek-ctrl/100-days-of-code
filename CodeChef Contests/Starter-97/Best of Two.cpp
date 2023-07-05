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
        int a,b,c,d,e,f;
        cin>>a>>b>>c>>d>>e>>f;
        int largeal=max(max(a,b),c);
        int largebo=max(max(d,e),f);
        int secal,secbo;
        if(largeal==a){
            secal=max(b,c);
        }
        else if(largeal==b){
            secal=max(a,c);
        }
        else if(largeal==c){
            secal=max(a,b);
        }
        if(largebo==d){
            secbo=max(e,f);
        }
        else if(largebo==e){
            secbo=max(d,f);
        }
        else if(largebo==f){
            secbo=max(d,e);
        }
        int al=largeal+secal;
        int bo=largebo+secbo;
        if(al>bo) cout<<"Alice"<<'\n';
        else if(bo>al) cout<<"Bob"<<'\n';
        else cout<<"tie"<<'\n';
        
    }
    return 0;
}