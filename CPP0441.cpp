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
        int n, x, k, ok = 0;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (x == k && ok == 0)
                ok = i + 1;
        }
        if (ok == 0)
            cout << -1 << endl;
        else
            cout << ok << endl;
    }

    return 0;
} /* Take Off Toward Your Dream ! */