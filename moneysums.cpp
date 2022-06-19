#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vt vector
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define dbg(c) cout << #c << '=' << c << endl
#define sz(x) (int)(x).size()
int n;
bool dp[1001][1001];
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin>>n;
    vt<int>a, sum;
    for (int i=0, b;i<n;i++) {
        cin>>b;
        a.pb(b);
    }
    sort(all(a));
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {

        }
    }
    cout<<sz(sum)<<'\n';
    for (int x : sum) cout<<x<<' ';
}