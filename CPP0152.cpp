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
        int a, m;
        cin >> a >> m;
        int i;
        for (i = 1; i < m; ++i)
        {
            if ((a * i) % m == 1)
            {
                cout << i << "\n";
                break;
            }
        }
        if (i == m)
            cout << -1 << "\n";
    }

    return 0;
}
/* Take Off Toward Your Dream ! */