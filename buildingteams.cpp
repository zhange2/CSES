#include <bits/stdc++.h>
using namespace std;
const int maxN = 1e5;
#define pb push_back
int n,m,temp,temp2;
vector<int>adj[maxN+1],v(maxN+1);
bool vis[maxN+1], color, bad;
void dfs(int node, bool color) {
    vis[node] = true;
    v[node] = color;
    for (int a : adj[node]) {
        if (!vis[a]) {
            dfs(a, !color);
        }
        else {
            if (v[a] == v[node])
            {
                bad = true;
            }
        }
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
            dfs(i, color);
        }
        if (bad) {
            cout<<"IMPOSSIBLE";
            return 0;
        }
    }
    for (int i=1;i<=n;i++) {
        if (v[i]) cout<<"2 ";
        else cout<<"1 ";
    }
}