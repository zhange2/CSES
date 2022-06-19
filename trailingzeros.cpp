#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int maxN = 1e9;
int main()
{
    int n, ans=0, exp=0, temp=1, x=5;
    cin>>n;
    while (x <= n) {
        ans+=(n/x);
        x*=5;
    }
    cout<<ans<<"\n";

}
