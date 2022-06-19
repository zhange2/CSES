#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;
ll dp[1000001];
const int modulo = 1e9+7;
int main()
{
    ll n, x;
    cin>>n>>x;
    vector<ll>coins(n);
    for (int i=0;i<n;i++) {
        cin>>coins[i];
    }
    for (int i=0;i<=x;i++) {
        dp[i] = INT_MAX;
    }
    dp[0] = 0;
    for (int i = 1; i <= n; i++) {
		for (int j = 0; j <= x; j++) {
			if(j - coins[i - 1] >= 0) {
				dp[j] = min(dp[j], dp[j - coins[i - 1]] + 1);
			}
		}
	}
    if (dp[x] == INT_MAX) cout<<-1<<"\n";
    else cout<<dp[x]<<"\n";
}