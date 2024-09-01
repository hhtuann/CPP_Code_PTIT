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
        n += m;

        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);

        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
    }

    return 0;
} /* Take Off Toward Your Dream ! */