#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define LL long long

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int a[n][m], b[n * m];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> a[i][j];

        int tren = 0, duoi = n - 1, trai = 0, phai = m - 1;
        int x = 0;

        while (x < n * m)
        {
            for (int i = trai; i <= phai; i++)
                b[x++] = a[tren][i];

            for (int i = tren + 1; i <= duoi; i++)
                b[x++] = a[i][phai];

            for (int i = phai - 1; i >= trai; i--)
                b[x++] = a[duoi][i];

            for (int i = duoi - 1; i > tren; i--)
                b[x++] = a[i][trai];

            tren++;
            duoi--;
            trai++;
            phai--;
        }

        for (int i = 0; i < n * m; i++)
            cout << b[i] << " ";
        cout << "\n";
    }

    return 0;
}
/* Take Off Toward Your Dream ! */