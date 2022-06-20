#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vt vector
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define dbg(c) cout << #c << '=' << c << endl
#define sz(x) (int)(x).size()
const int maxN = 2e5;
int n,a[maxN+1],ans,b[maxN+1];
int main()
{
    cin>>n;
    for (int i=0;i<n;i++) {
        cin>>a[i];
        a[i]--;
    }
    for (int i=0;i<n;i++)
        b[a[i]] = i;    
    ans = 1;
    for (int i=1;i<n;i++) {
        if (b[i] < b[i-1]) {
            ans++;
        }
    }
    cout<<ans<<'\n';
}
