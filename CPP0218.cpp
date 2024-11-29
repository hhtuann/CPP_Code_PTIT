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

        vector<int> a(n);
        for (auto &x : a)
            cin >> x;

        int MIN = *min_element(a.begin(), a.end());
        int MAX = *max_element(a.begin(), a.end());

        if (MIN == MAX)
        {
            cout << 0 << "\n";
            continue;
        }

        int gcd = 0;
        for (auto x : a)
            gcd = __gcd(gcd, x - MIN);

        int res = 1;
        for (int i = 2; i * i <= gcd; i++)
        {
            int cnt = 0;
            while (gcd % i == 0)
            {
                cnt++;
                gcd /= i;
            }
            res *= (cnt + 1);
        }

        if (gcd > 1)
            res *= 2;

        cout << res << '\n';
    }

    return 0;
}
/* Take Off Toward Your Dream ! */