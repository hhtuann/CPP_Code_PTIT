/***** PROBLEM NAME *****/
#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define LL long long
#define __lcm(a, b) 1LL * (a * b) / __gcd(a, b);

LL f[1000005];
void calc()
{
    f[0] = 1;
    for (LL i = 1; i < 1000000; i++)
        f[i] = __lcm(f[i - 1], i);
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    calc();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << f[n] << "\n";
    }

    return 0;
}
/* Take Off Toward Your Dream ! */