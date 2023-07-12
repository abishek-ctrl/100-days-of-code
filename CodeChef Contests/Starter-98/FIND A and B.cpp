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
        int x, y, z;
        cin >> x >> y >> z;
        int a=0, b=1;
        int flag=0;
        while(!flag){
            b=x;
            a=y*z;
            if(a%b==0){
                flag=1;
                break;
            }
            b=y;
            a=x*z;
            if(a%b==0){
                flag=1;
                break;
            }
            b=z;
            a=x*y;
            if(a%b==0){
                flag=1;
                break;
            }
            flag=1;
        }

        if (a % b == 0) {
            cout << a << " " << b << endl;
        } else {
            cout << "-1" << endl;
        }
    }
    return 0;
}