#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vt vector
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define dbg(c) cout << #c << '=' << c << endl
#define sz(x) (int)(x).size()
ll n, sum, ans;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin>>n;
    vt<int>a(n);
    // ans = 0;
    for (auto &b : a) cin>>b, sum += b;
    for (int i = 0; i < 1 << n; ++i)
    {
        ll cs = 0;
        for (int j = 0; j < n; ++j)
            if (i >> j & 1)
                cs += a[j];
        if (cs <= sum / 2)
            ans = max(ans, cs);
    }
    cout<<(sum - ans) - ans<<'\n';
}