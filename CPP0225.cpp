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

        int a[n][n];
        vector<int> row(n, 0), col(n, 0);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
                row[i] += a[i][j];
                col[j] += a[i][j];
            }
        }

        int MAX = max(*max_element(row.begin(), row.end()), *max_element(col.begin(), col.end()));
        int ans = 0;

        int i = 0, j = 0;
        while (i < n && j < n)
        {
            int MIN = min(MAX - row[i], MAX - col[j]);
            row[i] += MIN;
            col[j] += MIN;
            if (row[i] == MAX)
                i++;
            if (col[j] == MAX)
                j++;
            ans += MIN;
        }

        cout << ans << "\n";
    }

    return 0;
}
/* Take Off Toward Your Dream ! */