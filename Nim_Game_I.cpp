#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vt vector
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define dbg(c) cout << #c << '=' << c << endl
#define sz(x) (int)(x).size()
void solve() {
    int n, ans = 0;
    cin >> n;
    for (int i=0,a=0;i<n;i++) cin>>a, ans ^= a%4;
    cout<<(ans?"first\n":"second\n");
}
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin>>t;
    while (t--) {
        solve();
    }

}