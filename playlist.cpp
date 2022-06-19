#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vt vector
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define dbg(c) cout << #c << '=' << c << endl
#define sz(x) (int)(x).size()
int n, ans = 0;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin>>n;
    vt<int>a(n);
    for (int i=0;i<n;i++) {
        cin>>a[i];
    }
    int l = 0, r = n-1, cnt = 0;
    map<int,int>mp;
    while (l < r) {
        bool ok = 1;
        for (int i=l;i<=r;i++) {
            if (mp.find(a[i]) != mp.end()) {
                l = i;
                mp.clear();
                ok = 0;
                break;
            }
        }
        if (ok) ans = max(ans, r-l);
        l++, r--;
    }
    cout<<ans<<'\n';
}