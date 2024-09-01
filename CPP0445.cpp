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
        int n, s = 1e7, ss = 1e8;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (s > a[i])
                s = a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (ss > a[i] && a[i] > s)
                ss = a[i];
        }
        if (ss == 1e8)
            cout << -1 << endl;
        else
            cout << s << " " << ss << endl;
    }

    return 0;
} /* Take Off Toward Your Dream ! */