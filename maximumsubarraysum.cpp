#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int maxN = 2e5;
ll n, a[maxN+1], ans;
// Kadane's Algorithm
int main()
{
    cin>>n;
    for (int i=0;i<n;i++) cin>>a[i];
    ll curr = 0;

    for (int i=0;i<n;i++) {
        curr = max((ll)0, curr + a[i]);
        ans = max(ans, curr);
    }
    if (ans == 0) {
        cout<<*max_element(a, a+n)<<'\n';
        return 0;
    }
    cout<<ans<<'\n';
}