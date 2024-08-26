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
        LL n, k;
        cin >> n >> k;
        LL q = n / k;
        LL r = n % k;
        cout << q * k * (k - 1) / 2 + r * (r + 1) / 2 << "\n";
    }

    return 0;
}
/* Take Off Toward Your Dream ! */