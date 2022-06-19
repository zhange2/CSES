#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vt vector
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define dbg(c) cout << #c << '=' << c << endl
#define sz(x) (int)(x).size()
const int mxN = 2e5;
int n, m, ans, dist[mxN+1], p[mxN+1]; //p array is used for backtracking
vt<int>adj[mxN+1];
bool vis[mxN+1];
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin>>n>>m;
    for (int i=0;i<m;i++) {
        int a,b;
        cin>>a>>b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    queue<int>q;
    vis[1] = 1, dist[1] = 1;
    q.push(1);
    bool found = false;
    while (q.size()) {
        int x = q.front();
        q.pop();
        if (x == n) {
            found = true;
            break;
        }
        for (int c : adj[x]) {
            if (!vis[c]) {
                q.push(c);
                dist[c] = dist[x] + 1;
                vis[c] = 1;
                p[c] = x;
            }
        }
    }
    if (!found) {
        cout<<"IMPOSSIBLE\n";
        return 0;
    }
    cout<<dist[n]<<'\n';
    vt<int>v;
    v.pb(n);
    int pointer = n;
    while (pointer != 1) {
        pointer = p[pointer];
        v.pb(pointer);
    }
    reverse(all(v));
    for (int d : v) cout<<d<<' ';
}