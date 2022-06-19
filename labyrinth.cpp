#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vt vector
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define dbg(c) cout << #c << '=' << c << endl
#define sz(x) (int)(x).size()
int mat[1001][1001], ans = 0;
int ROW, COL;
int dRow[] = {-1, 0, 1, 0};
int dCol[] = {0, 1, 0, -1};
char dir[4] = {'U', 'R', 'D', 'L'};
struct Point
{
    int x;
    int y;
};

struct queueNode
{
    Point pt;
    int dist;
};

bool isValid(int row, int col)
{
    return (row >= 0) && (row < ROW) && (col >= 0) && (col < COL);
}
int rowNum[] = {-1, 0, 0, 1};
int colNum[] = {0, -1, 1, 0};
string t = "";
int BFS(Point src, Point dest)
{
    if (!mat[src.x][src.y] || !mat[dest.x][dest.y])
        return -1;

    bool visited[ROW][COL];
    memset(visited, false, sizeof visited);

    visited[src.x][src.y] = true;

    queue<queueNode> q;

    queueNode s = {src, 0};

    while (!q.empty())
    {
        queueNode curr = q.front();
        Point pt = curr.pt;

        if (pt.x == dest.x && pt.y == dest.y)
            return curr.dist;

        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int row = pt.x + rowNum[i];
            int col = pt.y + colNum[i];

            if (isValid(row, col) && mat[row][col] &&
                !visited[row][col])
            {
                visited[row][col] = true;
                queueNode Adjcell = {{row, col}, curr.dist + 1};
                t += dir[i];
                q.push(Adjcell);
                // t = t.substr(0, sz(t)-1); //change to sz(t)-1 
            }
        }
    }

    return -1;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    Point source;
    Point dest;
    cin>>ROW>>COL;
    for (int i = 0; i < ROW; i++)
        for (int j = 0; j < COL; j++)
        {
            char c;
            cin >> c;
            if (c == '#')
                mat[i][j] = 0;
            else if (c == '.')
                mat[i][j] = 1;
            else if (c == 'A') source = {i, j}, mat[i][j] = 1;
            else if (c == 'B') dest = {i, j}, mat[i][j] = 1;
        }
    cout<<source.x<<' '<<source.y<<'\n'<<dest.x<<' '<<dest.y<<'\n';
    ans = BFS(source, dest);
    dbg(t);
    if (ans == -1) {
        cout<<"NO";
        return 0;
    }
    cout<<"YES\n";
    cout << ans << '\n';
    cout<<t<<'\n';
}