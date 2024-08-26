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
        int n, k;
        cin >> n >> k;

        vector<int> a(n + 1), f(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            f[i] = f[i - 1] + a[i];
        }

        while (k--)
        {
            int l, r;
            cin >> l >> r;
            cout << f[r] - f[l - 1] << "\n";
        }
    }

    return 0;
}
/* Take Off Toward Your Dream ! */