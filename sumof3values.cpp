#include <bits/stdc++.h>
using namespace std;
const int maxN = 1e9;
int main()
{
    int n,x,temp;
    vector<int>v;
    cin>>n>>x;
    for (int i=0;i<n;i++) {
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    int lb = 0;
    int rb = n-1;
    int mb = lb+(rb-lb)/2;
    while(v[lb] + v[rb] + v[mb] != x)  {
        if ()
    }
}