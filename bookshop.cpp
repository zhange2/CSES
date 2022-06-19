#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vt vector
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define dbg(c) cout << #c << '=' << c << endl
#define sz(x) (int)(x).size()
const int mxN = 1e5;
int n, x, ans, dp[1001][mxN+1];
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin>>n>>x;
    vt<int>prices(n), pages(n);
    for (int i=0;i<n;i++) cin>>prices[i];
    for (int i=0;i<n;i++) cin>>pages[i];
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=x;j++) {
            if (j-prices[i-1] >= 0)
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-prices[i-1]] + pages[i-1]);
            else dp[i][j] = dp[i-1][j];
        }
    }
    cout<<dp[n][x]<<'\n';
}