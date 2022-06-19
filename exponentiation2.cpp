#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll mod = 1000000007;
ll solve(ll base, ll exp, ll mod) {
	if (exp == 0) return 1;
	ll ans = solve(base, exp/2, mod);
	if (exp%2==1) return (((ans * ans)  % mod) * base) % mod;
	else return (ans * ans) % mod;
}
int main() {
	ll n, a, b, c;
	cin>>n;
	vector<int>v;
	while (n--) {
		cin>>a>>b>>c;
		ll temp = solve(b,c, mod - 1);
		cout << solve(a, temp, mod) << '\n';
	}
}
