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
        int n, m;
        cin >> n >> m;

        long long x, maxx = -1e8, minn = 1e8;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (maxx < x)
                maxx = x;
        }
        for (int i = 0; i < m; i++)
        {
            cin >> x;
            if (minn > x)
                minn = x;
        }
        cout << minn * maxx << endl;
    }

    return 0;
}
/* Take Off Toward Your Dream ! */