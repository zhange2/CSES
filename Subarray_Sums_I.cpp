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
    map<int,int>mp;
    int n, k; cin>>n>>k;
    vt<int>a(n);
    for (int i=0;i<n;i++) cin>>a[i];
    int cnt = 0, ans = 0;
    mp[0] = 1;
    for (int i=0;i<n;i++) {
        cnt += a[i];
        ans += mp[cnt-k];
        mp[cnt]++;
    }
    cout<<ans<<'\n';
}