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
        LL n, k;
        cin >> n >> k;

        int d = n / k;
        int r = n % k;

        LL ans = 1LL * d * k * (k - 1) / 2 + 1LL * r * (r + 1) / 2;

        if (ans == k)
            cout << 1 << "\n";
        else
            cout << 0 << "\n";
    }

    return 0;
}
/* Take Off Toward Your Dream ! */