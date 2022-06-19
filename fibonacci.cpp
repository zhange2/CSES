#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9 + 7;
int a[100001];
int fib(int n) {
    if (n == 2 || n == 1) return 1;
    if (a[n] != 0) {
        return a[n];
    }
    else {
        a[n] = fib(n - 1) + fib(n - 2);
        a[n] %= mod;
        return a[n];
    }
}
signed main()
{
    int n;
    cin>>n;
    cout<<fib(n-1)<<'\n';
}