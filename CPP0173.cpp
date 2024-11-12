#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define LL long long

LL __lcm(LL a, LL b)
{
    return a * b / __gcd(a, b);
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        LL x, y, z, n;
        cin >> x >> y >> z >> n;

        LL lcm = __lcm(__lcm(x, y), z);
        LL L = pow(10, n - 1);
        LL R = 10 * L;

        if (lcm >= R)
            cout << -1 << "\n";
        else
        {
            if (L % lcm == 0)
                cout << L << "\n";
            else
                cout << L + lcm - L % lcm << "\n";
        }
    }

    return 0;
}
/* Take Off Toward Your Dream ! */