#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vt vector
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define dbg(c) cout << #c << '=' << c << endl
#define sz(x) (int)(x).size()
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    queue<ll> q;
    ll n, k, ans = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
        q.push(i);
    while (q.size())
    {
        if (q.size() == 1)
        {
            ans = q.front();
            break;
        }
        int x = q.front();
        q.pop();
        ans = q.front();
        cout<<ans<<' ';
        q.pop();
        q.push(x);
    }
    // int ans = q.front();
    cout<<'\n';
    cout << ans << '\n';
}