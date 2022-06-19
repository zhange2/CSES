#include <bits/stdc++.h>
#include <numeric>
using namespace std;
#define ll long long
#define vt vector
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define dbg(c) cout << #c << '=' << c << endl
#define sz(x) (int)(x).size()
ll n, k, ans;
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
ll lcm(ll a, ll b)
{
    return a * b / gcd(a, b); // euclidean algorithm
}
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin>>n;
    vt<ll>a(k);
    for (int i=0;i<n;i++) cin>>a[i];
    for (int i=0;i<k;i++) {
        ans += n/a[i];
        for (int j=0;j<k;j++) {
            ans -= n / lcm(a[i], a[j]);
        }
    }
    cout<<ans<<'\n';
}