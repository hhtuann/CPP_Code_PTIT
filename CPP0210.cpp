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

        vector<int> a(n + 1);
        int MIN = INT_MAX, ans = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            ans = max(ans, a[i] - MIN);
            MIN = min(MIN, a[i]);
        }
        if (ans == 0)
            cout << "-1\n";
        else
            cout << ans << "\n";
    }

    return 0;
}
/* Take Off Toward Your Dream ! */