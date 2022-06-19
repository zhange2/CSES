#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back
const int maxN = 1e5;
int n,m, temp, temp2;
vector<int>adj[maxN+1], ans;
bool vis[maxN+1];
void dfs(int node) {
    vis[node] = true;
    for (int a : adj[node]) {
        if (!vis[a]) dfs(a);
    }
}
int main()
{
    cin>>n>>m;
    for (int i=0;i<m;i++) {
        cin>>temp>>temp2;
        adj[temp].pb(temp2);
        adj[temp2].pb(temp);
    }
    for (int i=1;i<=n;i++) {
        if (!vis[i]) {
            ans.pb(i);
            dfs(i);
        }
    }
    cout<<ans.size()-1<<'\n';
    for (int i=1;i<ans.size();i++) {
        cout<<ans[i-1]<<' '<<ans[i]<<'\n';
    }
}