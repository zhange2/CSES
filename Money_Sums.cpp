#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vt vector
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define dbg(c) cout << #c << '=' << c << endl
#define sz(x) (int)(x).size()
const int mxN = 1e5;
int n;
bool dp[mxN][mxN];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    vt<int> a(n);
    for (auto &b : a)
        cin >> b;
    dp[0][0] = 1;
    for (int i = 0; i < n; i++)
    {
        for (int curSum = 0; curSum <= mxN; curSum++)
        {
            dp[i][curSum] = dp[i - 1][curSum];
            int prevSum = curSum - a[i];
            if (prevSum >= 0 && dp[i - 1][prevSum])
            {
                dp[i][curSum] = true;
            }
        }
    }
    vt<int> ans;
    for (int i = 0; i <= n; i++)
    {
        if (dp[n][i])
            ans.pb(i);
    }
    cout << sz(ans) << '\n';
    for (auto x : ans)
        cout << x << ' ';
}