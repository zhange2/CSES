#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vt vector
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define dbg(c) cout << #c << '=' << c << endl
#define sz(x) (int)(x).size()
const int mxN = 1e6;
int n;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin>>n;
    if (n < 10) {
        cout<<1;
        return 0;
    }
    vt<int>dp(n + 1, 1e9);
    dp[0] = 0;
    for (int i=0;i<=n;i++) {
        vt<int>digits;
        int temp = i;
        while (temp > 0) {
            digits.pb(temp%10);
            temp/=10;
        }
        for (auto a : digits) {
            dp[i] = min(dp[i], dp[i - a] + 1);
        }
        // dbg(dp[i]);
    }
    cout<<dp[n]<<'\n';
}