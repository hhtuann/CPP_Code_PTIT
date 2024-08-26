#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define LL long long

void input(int a[][50], int n, int m)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, p;
    cin >> n >> m >> p;

    int a[50][50] = {}, b[50][50] = {};
    input(a, n, m);
    input(b, m, p);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            int product = 0;
            for (int k = 0; k < m; k++)
                product += a[i][k] * b[k][j];

            cout << product << " ";
        }
        cout << "\n";
    }

    return 0;
}
/* Take Off Toward Your Dream ! */