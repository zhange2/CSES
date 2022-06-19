#include <bits/stdc++.h>
using namespace std;
const int maxN = 1e6;
const int modulo = 1e9+7;
int main()
{
    int dp[maxN+1], coins[maxN+1];
    int n,x;
    cin>>n>>x;
    for (int i=0;i<n;i++) cin>>coins[i];
    sort(coins, coins+n);
    reverse(coins, coins+n);
    dp[0] = 1;
    for (int j=1;j<=n;j++) {
        for (int i=0;i<=x;i++) {
            if (i  - coins[j - 1] >= 0) {
                dp[i] = dp[i] + dp[i - coins[j-1]];
                dp[i] %= modulo;
            } 
        }
    }

    
    cout<<dp[x]<<"\n";
}