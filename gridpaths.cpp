#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vt vector
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define dbg(c) cout << #c << '=' << c << endl
#define sz(x) (int)(x).size()
const int mxN = 1000, MOD = 1e9 + 7;
ll n, dp[mxN+1][mxN+1];
char grid[mxN+1][mxN+1];
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin>>n;
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            cin>>grid[i][j];
            // dp[i][j] = INT_MAX;
        }
    }

    if (grid[n-1][n-1] == '*') {
        cout<<0<<'\n';
        return 0;
    }
    dp[0][0] = 1;
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            if (grid[i-1][j] != '*' && i > 0) {
                dp[i][j] = dp[i][j] + dp[i - 1][j] % MOD;
            }
            if (grid[i][j-1] != '*' && j > 0) {
                dp[i][j] = dp[i][j] + dp[i][j - 1] % MOD;
            }
            // dbg(dp[i][j]);
        }
    }
    cout<<dp[n - 1][n - 1] % MOD;
}