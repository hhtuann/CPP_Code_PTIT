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
        int n;
        cin >> n;

        int a[4 * n][4 * n];
        for (int i = 0; i < 4 * n; i++)
            for (int j = 0; j < 4 * n; j++)
                a[i][j] = i * 4 * n + j + 1;

        vector<int> c1, c2;

        int tren = 0, duoi = 4 * n - 1, trai = 1, phai = 4 * n - 1;
        while (tren <= duoi && trai <= phai)
        {
            for (int i = duoi; i >= tren; i--)
                c1.push_back(a[i][phai]);
            for (int i = phai - 1; i >= trai; i--)
                c1.push_back(a[tren][i]);
            for (int i = tren + 1; i <= duoi - 1; i++)
                c1.push_back(a[i][trai]);
            for (int i = trai + 1; i <= phai - 2; i++)
                c1.push_back(a[duoi - 1][i]);
            duoi -= 2;
            tren += 2;
            trai += 2;
            phai -= 2;
        }

        tren = 0, duoi = 4 * n - 1, trai = 0, phai = 4 * n - 2;
        while (tren <= duoi && trai <= phai)
        {
            for (int i = tren; i <= duoi; i++)
                c2.push_back(a[i][trai]);
            for (int i = trai + 1; i <= phai; i++)
                c2.push_back(a[duoi][i]);
            for (int i = duoi - 1; i >= tren + 1; i--)
                c2.push_back(a[i][phai]);
            for (int i = phai - 1; i >= trai + 2; i--)
                c2.push_back(a[tren + 1][i]);
            duoi -= 2;
            tren += 2;
            trai += 2;
            phai -= 2;
        }

        reverse(c1.begin(), c1.end());
        reverse(c2.begin(), c2.end());

        for (auto x : c1)
            cout << x << " ";
        cout << endl;

        for (auto x : c2)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}
/* Take Off Toward Your Dream ! */