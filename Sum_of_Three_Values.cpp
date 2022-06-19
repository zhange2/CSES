#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vt vector
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define dbg(c) cout << #c << '=' << c << endl
#define sz(x) (int)(x).size()
// 1 2 5 7
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, target; cin>>n>>target;
    vt<pair<int,int>>a(n);
    for (int i=0;i<n;i++) {
        int b; cin>>b;
        a[i].first = b; a[i].second = i;
    }
    sort(all(a));
    vt<int>ans;
    for (int i=0;i<n-2;i++) {
        int l = i+1, r = n-1;
        while (l < r) {
            int x = a[i].first + a[l].first + a[r].first;
            if (x == target) {
                ans.pb(a[i].second+1); ans.pb(a[l].second+1); ans.pb(a[r].second+1);
                // cout<<a[i].second+1<<' '<<a[l].second+1<<' '<<a[r].second+1;
                sort(all(ans));
                for (int u=0;u<sz(ans);u++) cout<<ans[u]<<' ';
                return 0;
            }
            else if (x < target) l++;
            else r--;
        } 
    }
    cout<<"IMPOSSIBLE\n";
}