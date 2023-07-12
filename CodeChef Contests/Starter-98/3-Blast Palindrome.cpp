#include <bits/stdc++.h>
#define lli long long int
#define pb push_back
#define po pop_back
#define mp make_pair
#define cases lli testcases;cin>>testcases; while(testcases--)
using namespace std;

bool palin(string& s,int n) {
    
    if(n%3==1){
        return true;
    }
    for (char i = 'a'; i <= 'z'; i++) {
        int first = n + 1;
        int last = -1;
        for (int j = 0; j < n; j++) {
            if (j % 3 == 0 && s[j] == i) {
                first = j;
                break;
            }
        }

        for (int j = n - 1; j >= 0; j--) {
            int x = n - 1 - j;
            if (x % 3 == 0 && s[j] == i) {
                last = j;
                break;
            }
        }

        if (last > first)
            return true;
    }

    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cases{
        int n;
        cin>>n;
        string s;
        cin>>s;
        bool res=palin(s,n);
        if (res) {
        cout << "Yes" << endl;
        } else {
        cout << "No" << endl;
        }
    }
    return 0;
}