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
        int n, s = 1e6 + 5;
        cin >> n;

        int a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        for (int i = 0; i < n; i += 2)
        {
            b[i + 1] = a[i / 2];
            b[i] = a[n - i / 2 - 1];
        }
        for (int i = 0; i < n; i++)
            cout << b[i] << " ";
        cout << endl;
    }

    return 0;
}
/* Take Off Toward Your Dream ! */