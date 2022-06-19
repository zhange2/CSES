#include <bits/stdc++.h>
using namespace std;
int n,m, ans = 0;
char arr[1000][1000];
bool vis[1000][1000];
void dfs(int row, int col, int n, int m) {
    if (arr[row][col] == '#') return;
    vis[row][col] = true;
    if (row >= 1 && !vis[row-1][col])
        dfs(row - 1, col, n, m);
    if (row <= n - 2 && !vis[row + 1][col])
        dfs(row + 1, col, n, m);
    if (col >= 1 && !vis[row][col-1])
        dfs(row, col - 1, n, m);
    if (col <= m - 2 && !vis[row][col+1])
        dfs(row, col + 1, n, m);
}
int main()
{
    cin>>n>>m;
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            cin>>arr[i][j];
        }
    }
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            if (arr[i][j] == '.' && !vis[i][j]) {
                dfs(i, j, n, m);
                ans++;
            }
        }
    }
    cout<<ans<<'\n';
}