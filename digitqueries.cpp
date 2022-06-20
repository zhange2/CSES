#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vt vector
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define dbg(c) cout << #c << '=' << c << endl
#define sz(x) (int)(x).size()

int xpow(int x, int y)
{
    int res = 1;
    while (y > 0)
    {
        if (y & 1)
            res = (res * x);
        y = y >> 1;
        x = (x * x);
    }
    return res;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int c = 1;
        for (int p = 9;; n -= p, c++, p = 9 * xpow(10, c - 1) * c)
        {
            if (n - p <= 0)
                break;
        }
        n--;
        int x = n / c;
        int y = n % c;
        int ans = xpow(10, c - 1) + x;
        string s = to_string(ans);
        cout << s[y] << '\n';
    }
}
