#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
    queue<ll> q;
    ll n, k, ans=0;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        q.push(i);
    while (q.size())
    {
        if (q.size() == 1) {
            ans = q.front(); 
            break;
        }
        q.pop();
    }
    cout << ans << '\n';
}
int main()
{
    int t = 1;
    cin>>t;
    while (t--) solve();
}