#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n,a, ans=1, arr[200001];
    cin>>n;
    vector<int>vt;
    for (int i=0;i<n;i++) {
        cin>>a;
        vt.push_back(a);
    }
    sort(vt.begin(), vt.end());
    for (int i=1;i<n;i++) {
        if (vt[i] != vt[i-1]) ans++;
    }
    cout<<ans<<"\n";
}