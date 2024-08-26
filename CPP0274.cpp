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
        int n, ans = 0;
        cin >> n;

        map<int, int> mp;
        for (int i = 0, x; i < n; i++)
        {
            cin >> x;
            mp[x]++;
        }

        for (auto &x : mp)
            if (x.second > 1)
                ans += x.second;

        cout << ans << "\n";
    }

    return 0;
}
/* Take Off Toward Your Dream ! */