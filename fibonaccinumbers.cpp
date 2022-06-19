#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int modulo = 1e9 + 7;
const int maxN = 1e18;
ll fib(ll a, ll memo[]) {
    if (a == 1 || a == 2) return 1;
    else if (a == 0) return 0;
    else {
        if (memo[a]) return memo[a];
        else memo[a] = (fib(a-1) + fib(a-2))%modulo;
        return memo[a];
    }
}
int main()
{
    ll n;
    ll* memo = new ll[maxN+1];
    cin>>n;
    cout<<fib(n, memo)<<'\n';
}