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
        int n, ok = 0, x;
        cin >> n;
        map<int, int> a;
        for (int i = 0; i < n - 1; i++)
        {
            cin >> x;
            a[x]++;
        }
        for (int i = 1; i <= n + 1; i++)
        {
            if (a[i] == 0)
            {
                cout << i << endl;
                break;
            }
        }
    }

    return 0;
} /* Take Off Toward Your Dream ! */