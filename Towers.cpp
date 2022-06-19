#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vt vector
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define dbg(c) cout << #c << '=' << c << endl
#define sz(x) (int)(x).size()

signed main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n; cin>>n;
    vt<int>towers;
    for (int i=0;i<n;i++) {
        int x; cin>>x;
        int lo = 0, hi = sz(towers);
        while (lo < hi) {
            int m = (lo + hi) / 2;
            if (towers[m] > x) hi = m;
            else lo = m+1;
        }
        if (lo == sz(towers)) towers.pb(x);
        else towers[lo] = x;
    }
    cout<<sz(towers);
}