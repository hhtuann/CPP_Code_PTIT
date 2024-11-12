#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define LL long long

int __lcm(int a, int b)
{
    return a / __gcd(a, b) * b;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int m, n, a, b;
        cin >> m >> n >> a >> b;

        int cntDivA = n / a - (m - 1) / a;
        int cntDivB = n / b - (m - 1) / b;
        int cntDivAB = n / __lcm(a, b) - (m - 1) / __lcm(a, b);

        cout << cntDivA + cntDivB - cntDivAB << "\n";
    }

    return 0;
}
/* Take Off Toward Your Dream ! */