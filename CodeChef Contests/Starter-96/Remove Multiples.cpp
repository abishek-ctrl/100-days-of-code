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
        int n, m;
        cin >> n >> m;

        long long int total_sum = (1LL * n * (n + 1)) / 2;
        long long int present_sum = 0;

        for (int i = 0; i < m; i++) {
            int q;
            cin >> q;
            present_sum += q;
        }

        long long int cost = total_sum - present_sum;

        cout << cost << '\n';
    }
    return 0;
}