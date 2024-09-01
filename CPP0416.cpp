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
        int n;
        LL k;
        cin >> n >> k;
        map<LL, LL> b;
        LL a[n];
        LL s = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[a[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            if (b[k - a[i]] > 0)
            {
                if (a[i] == k - a[i])
                    s += b[k - a[i]] - 1;
                else
                    s += b[k - a[i]];
            }
        }
        cout << s / 2 << endl;
    }

    return 0;
}
/* Take Off Toward Your Dream ! */