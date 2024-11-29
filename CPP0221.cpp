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

        int a[n][m], a2[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
                a2[i][j] = a[i][j];
            }
        }

        int tren = 0, duoi = n - 1, trai = 0, phai = m - 1;
        while (tren <= duoi && trai <= phai)
        {
            for (int i = trai + 1; i <= phai; i++)
                a2[tren][i] = a[tren][i - 1];

            for (int i = tren + 1; i <= duoi; i++)
                a2[i][phai] = a[i - 1][phai];

            if (trai <= phai)
                for (int i = phai - 1; i >= trai; i--)
                    a2[duoi][i] = a[duoi][i + 1];

            if (tren <= duoi)
                for (int i = duoi - 1; i >= tren; i--)
                    a2[i][trai] = a[i + 1][trai];
            tren++;
            duoi--;
            trai++;
            phai--;
        }
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cout << a2[i][j] << " ";

        cout << "\n";
    }

    return 0;
}
/* Take Off Toward Your Dream ! */