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
        int b, p;
        cin >> b >> p;

        int ans = 0;
        for (int x = 1; x < p; x++)
        {
            if ((1LL * x * x) % p == 1)
            {
                // với x thõa mãn thì x+i*p cũng thõa mãn
                int iMax = b / p;
                ans += x + iMax * p > b ? iMax : iMax + 1;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
/* Take Off Toward Your Dream ! */