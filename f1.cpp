#include <bits/stdc++.h>
#define int long long
#define ii pair<int, int>
#define INF 1000000000000000000
#define MOD 1000000007
#define ld long long int
using namespace std;
#define INV 500000004

signed main(){
    int t; cin >> t;
    while (t--){
        int n, m, k;
        cin >> n >> m >> k;
        vector< vector<ld> > dpp(m+1, vector<ld>(n+1, 0));
        vector< vector<ld> > dpq(m+1, vector<ld>(n+1, 0));
        vector< vector<int> > dpas(m+1, vector<int>(n+1, 0));

        for (int j=1; j<=m; ++j){
            dpp[j][0] = INF;
            dpq[j][0] = 1;
            dpas[j][0] = INF;
        }

        for (int i=1; i<=n; ++i){
            for (int j=1; j<=m; ++j){
                ld ap = dpp[j-1][i-1];
                ld bp = dpp[j][i-1];
                ld aq = dpq[j-1][i-1];
                ld bq = dpq[j][i-1];

                int aa = dpas[j-1][i-1];
                int bb = dpas[j][i-1];

                if (b < a + 2*k){
                    dp[j][i] = (a+b)/2.0;
                    int smoll = (aa+bb)%MOD;
                    dpas[j][i] = (smoll*INV)%MOD;
                }
                else {
                    dp[j][i] = k + a;
                    dpas[j][i] = (k + aa)%MOD;
                }
                // dp[j][i] = max(dp[j-1][i-1], min(k + dp[j-1][i-1], dp[j][i-1]-k));
            }
        }

        cout << dpas[m][n] << endl;

    }
}