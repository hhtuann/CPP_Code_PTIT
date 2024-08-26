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

        int a[n][n] = {};
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];

                if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
                    cout << a[i][j] << " ";
                else
                    cout << "  ";
            }
            cout << "\n";
        }
    }

    return 0;
}
/* Take Off Toward Your Dream ! */