#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int maxN = 2e5;
int n, arr[maxN+1], cnt[1000001];
signed main() {
	cin>>n;
	for (int i=0;i<n;i++) {
		cin>>arr[i];
		cnt[arr[i]]++;
	}
	for (int i = 1000000;i>=1;i--) {
		int x = 0;
		for (int j=i;j<=1000000;j+=i) {
			x += cnt[j];
		}
		if (x >= 2) {
			cout<<i;
			return 0;
		}
	}
	cout<<1;
	// ll n;
	// cin >> n;
	// ll x[n];
	// ll cnt[1000001] = {};
	// for (int i = 0; i < n; i++)
	// {
	// 	cin >> x[i];
	// 	cnt[x[i]]++;
	// }
	// for (int i = 1000000; i >= 1; i--)
	// {
	// 	ll d = 0;
	// 	for (int j = i; j <= 1000000; j += i)
	// 		d += cnt[j];
	// 	if (d >= 2)
	// 	{
	// 		cout << i;
	// 		return 0;
	// 	}
	// }
}
