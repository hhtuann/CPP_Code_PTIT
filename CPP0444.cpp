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
        int n, k, x, p;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (x == k)
                p = i + 1;
        }
        cout << p << endl;
    }

    return 0;
} /* Take Off Toward Your Dream ! */