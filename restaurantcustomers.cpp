#include <bits/stdc++.h>
using namespace std;
const int maxN = 2e5;
vector<pair<int,int>>v;
int n,ans,a[maxN+1];
//Prefix sums
int main()
{
    cin>>n;
    for (int i=0,a,b;i<n;i++) {
        cin>>a>>b;
        v.push_back(make_pair(a,1));
        v.push_back(make_pair(b, -1));
    }
    sort(v.begin(), v.end());
    int curr = 0;
    for (auto x : v) {
        curr += x.second;
        ans = max(ans, curr);
    }
    cout<<ans<<'\n';
}
/*
3
5 8
2 4
3 9

2 4
3 9
5 8
*/