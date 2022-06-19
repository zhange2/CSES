#include <bits/stdc++.h>
using namespace std;
const int maxN = 2e5;
int n,a[maxN+1],ans;
vector<pair<int,int>>v;
bool cmp(pair<int,int>a, pair<int,int>b) {
    if (a.second == b.second) return a.first < b.first;
    return a.second < b.second;
}
int main()
{
    cin>>n;
    for (int i=0;i<n;i++) {
        int s,e;
        cin>>s>>e;
        v.push_back(make_pair(s, e));
    }
    sort(v.begin(), v.end(), cmp);
    int currEnd = 0;
    for (auto a : v) {
        if (a.first >= currEnd) {
            currEnd = a.second;
            ans++;
        }
    }
    cout<<ans<<'\n';
}
/*
    3 5
    5 8
    4 9
*/