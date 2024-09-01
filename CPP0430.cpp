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
        int n, s = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        for (int i = 1; i < n; i++)
        {
            if (a[i] - a[i - 1] > 1)
                s += a[i] - a[i - 1] - 1;
        }
        cout << s << endl;
    }

    return 0;
} /* Take Off Toward Your Dream ! */