#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define int long long

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, p;
        cin >> n >> p;

        vector<pair<int, int>> primes;
        for (int i = 2; i * i <= p; i++)
        {
            int cnt = 0;
            while (p % i == 0)
            {
                cnt++;
                p /= i;
            }
            if (cnt != 0)
                primes.emplace_back(i, cnt);
        }
        if (p > 1)
            primes.emplace_back(p, 1);

        int ans = n;
        for (auto [x, y] : primes)
        {
            int cnt = 0;
            for (int i = n; i > 0; i /= x)
                cnt += i / x;
            ans = min(ans, cnt / y);
        }

        cout << ans << "\n";
    }

    return 0;
}
/* Take Off Toward Your Dream ! */