#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;
ll solve(ll a, ll b) {
	if (b == 0) return 1;
	ll ans = solve(a, b/2);
	if (b%2==1) return (((ans * ans)  % mod) * a) % mod;
	else return (ans * ans) % mod;
}
int main() {
	ll n, ans,a, b;
	cin>>n;
	ll temp = n;
	vector<int>v;
	while (n--) {
		cin>>a>>b;
		cout<<solve(a,b)<<"\n";
	}
}
