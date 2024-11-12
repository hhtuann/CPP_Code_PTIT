#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define LL long long

const int MOD = 1e9 + 7;

LL binpow(LL a, LL b)
{
    LL res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        vector<int> a(2000);
        for (int i = n - 1; i >= 0; i--)
            cin >> a[i];

        LL sum = a[0];
        for (int i = 1; i < n; i++)
        {
            sum += 1LL * a[i] * binpow(x, i);
            sum %= MOD;
        }
        cout << sum << "\n";
    }

    return 0;
}
/* Take Off Toward Your Dream ! */