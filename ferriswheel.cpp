#include <bits/stdc++.h>
using namespace std;
const int maxN = 2e5;
int n,x,a[maxN+1],ans;
int main()
{
    cin>>n>>x;
    for (int i=0;i<n;i++) cin>>a[i];
    sort(a, a+n);
    //two pointers
    int l = 0, r = n-1;
    while (l <= r) {
        if (a[l] + a[r] <= x) {
            ans++,l++,r--;
        }
        else if (a[l] + a[r] > x) {
            r--;
            ans++;
        }
    }

    cout<<ans<<'\n';
}