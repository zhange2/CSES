#include <bits/stdc++.h>
using namespace std;
const int maxN = 2e5;
int n,x,a[maxN+1];
int main()
{
    cin>>n>>x;
    for (int i=0;i<n;i++) cin>>a[i];
    map<int,int>mp;
    for (int i=0;i<n;i++) {
        if (mp.find(x-a[i]) != mp.end()) {
            cout<<mp[x-a[i]] + 1<<' '<<i + 1; //1 indexed
            return 0;
        }
        else {
            mp[a[i]] = i;
        }
    }

    cout<<"IMPOSSIBLE"<<'\n';
}