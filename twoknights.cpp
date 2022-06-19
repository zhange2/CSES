#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll solve(ll n) {
    return (n * n) *(n * n - 1) / 2 - 4 * (n-1) * (n-2);
}
int main() {
    ll n;
    cin>>n;
    for (int i=1;i<=n;i++) {
        cout<<solve(i)<<endl;
    }

}

