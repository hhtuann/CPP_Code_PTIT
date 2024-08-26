#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define LL long long

const int NMAX = 1e6 + 5;
const int INF = 1e9 + 7;

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

        vector<int> a(n);
        for (auto &x : a)
            cin >> x;

        sort(a.begin(), a.end());

        int ans = INT_MAX;
        for (int i = 1; i < n; i++)
            ans = min(ans, a[i] - a[i - 1]);

        cout << ans << "\n";
    }

    return 0;
}
/* Take Off Toward Your Dream ! */