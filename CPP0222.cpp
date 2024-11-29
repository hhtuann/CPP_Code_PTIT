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

        int a[n + 1][n + 1];
        map<int, int> mp;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cin >> a[i][j];
                if (mp[a[i][j]] == i - 1)
                    mp[a[i][j]]++;
            }
        }

        int ans = 0;
        for (auto &[x, y] : mp)
            ans += (y == n);

        cout << ans << "\n";
    }

    return 0;
}
/* Take Off Toward Your Dream ! */