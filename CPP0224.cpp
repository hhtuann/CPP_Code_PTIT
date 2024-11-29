#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define LL long long

int a[100][100], n, m;
bool vis[100][100];
int dx[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dy[] = {1, -1, 0, 1, -1, 0, 1, -1};

void DFS(int i, int j)
{
    vis[i][j] = true;
    for (int x = 0; x < 8; x++)
    {
        int u = i + dx[x];
        int v = j + dy[x];
        if (u >= 0 && u < n && v >= 0 && v < m && a[u][v] && !vis[u][v])
            DFS(u, v);
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> a[i][j];

        memset(vis, 0, sizeof(vis));
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (!vis[i][j] && a[i][j])
                {
                    ans++;
                    DFS(i, j);
                }
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
/* Take Off Toward Your Dream ! */