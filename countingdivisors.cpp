#include <bits/stdc++.h>
using namespace std;
const int maxN = 1e5;
int main() {
	int n, arr[maxN+1],a,ans=0;
	vector<int>v;
	bool square = false;
	cin>>n;
	int temp = n;
	while (n > 0) {
		cin>>a;
		ans = 0;
		square = false;
		for (int i=1;i*i<=a;i++) {
			if (a%i==0) ans++;
			if (i*i == a) square = true;
		}
		if (square) ans = ans * 2 - 1;
		else ans*=2;
		v.push_back(ans);
		n--;
	}
	for (int i=0;i<temp;i++) cout<<v[i]<<"\n";
}
