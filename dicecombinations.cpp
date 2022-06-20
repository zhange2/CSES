#include <bits/stdc++.h>
using namespace std;
const int modulo = 1e9 + 7;
#define ll long long
#define vt vector
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define dbg(c) cout << #c << '=' << c << endl
#define sz(x) (int)(x).size()
int main()
{
    ll n, ans;
    cin>>n;
    ll arr[n+1] = {0};
    for (int i=1;i<=n;i++) {
        arr[0] = 1;
        for (int x=1;x<=6;x++) {
            if (x > i) break;
            arr[i] = (arr[i] + arr[i-x]) % modulo;
        }
    }
    
    cout<<arr[n]<<"\n";
}
