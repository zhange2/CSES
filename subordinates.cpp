#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vt vector
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define dbg(c) cout << #c << '=' << c << endl
#define sz(x) (int)(x).size()
const int mxN = 2e5;
int n, depth[mxN+1], subtree[mxN+1];
vt<int>adj[mxN+1];
void dfs(int node) {
    subtree[node] = 1;
    for (int u : adj[node]) {
        dfs(u);
        subtree[node] += subtree[u];
    }
}
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin>>n;
    for (int i=2;i<=n;i++) {
        int a;
        cin>>a;
        // adj[i].pb(a);
        adj[a].pb(i);
    }
    dfs(1);
    for (int i=1;i<=n;i++) {
        cout<<subtree[i] - 1<<' ';
    }
}