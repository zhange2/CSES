#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vt vector
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define dbg(c) cout << #c << '=' << c << endl
#define sz(x) (int)(x).size()
ll const int MOD = 1e9 + 7;
ll exp(ll a, ll b)
{
    if (b == 0)
        return 1;
    ll ans = exp(a, b / 2);
    if (b % 2 == 1)
        return (((ans * ans) % MOD) * a) % MOD;
    else
        return (ans * ans) % MOD;
}
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    ll num = 1;
    for (int i=0;i<n;i++) {
        ll x, k;
        cin>>x>>k;
        num *= exp(x, k);
        num %= MOD;
    }
    // dbg(num);
    vt<ll>v;
    v.pb(1);
    v.pb(num);
    for (ll i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            v.pb(i);
            if (i * i != num)
            {
                v.pb(num / i);
            }
        }
    }
    cout<<sz(v)<<' ';
    // for (ll a : v) cout<<a<<' ';
    // cout<<endl;
    ll sum = 0, prod = 1;
    for (ll a : v) {
        sum += a;
        prod *= a;
        sum %= MOD, prod %= MOD;
    }
    cout<<sum<<' '<<prod;
}