#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int maxN = 100;
const int maxX = 1e6;
const int modulo = 1e9 + 7;
int main()
{
    ll n, x, arr[maxN+1];
    cin>>n>>x;
    vector<int>coins(n);
    for (int i=0;i<n;i++) {
        cin>>coins[i];
    }
    sort(coins.begin(),coins.end());
    reverse(coins.begin(), coins.end());
    ll dp[1000001] = {0};
    dp[0] = 1;
    for (int i=0;i<=x;i++) {
        for (int j=1;j<=n;j++) {
            if (i  - coins[j - 1] >= 0) {
                dp[i] = dp[i] + dp[i - coins[j-1]];
                dp[i] %= modulo;
            } 
        }
    }
    cout<<dp[x]<<"\n";
}