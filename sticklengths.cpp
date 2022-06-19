#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int maxN = 2e5;
ll n,a[maxN+1],ans;
int main()
{
    cin>>n;
    for (int i=0;i<n;i++) cin>>a[i];
    sort(a, a+n);
    ll target = 0;
    if (n&1) {
        target = a[n/2];
    }
    else target = (a[n/2] + a[n/2-1]) / 2;
    for (int i=0;i<n;i++) {
        ans+=abs(a[i] - target);
    }
    cout<<ans<<'\n';
}