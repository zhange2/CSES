#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int maxN = 2e5;
int n,a[maxN+1],ans,b[maxN+1];
//count how many numbers where: index of i > index of i+1
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
    cout<<ans<<endl;
}