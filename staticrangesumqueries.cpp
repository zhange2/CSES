#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int maxN = 2e5;
ll n,a[maxN+1],q, pSum[maxN+1];
int main()
{
    cin>>n>>q;
    for (int i=0;i<n;i++) cin>>a[i];
    for (int i=1;i<=n;i++) {
        pSum[i] = pSum[i-1] + a[i-1];
    }
    while (q--) {
        ll s,e;
        cin>>s>>e;
        cout<<pSum[e] - pSum[s-1]<<'\n';
    }
}