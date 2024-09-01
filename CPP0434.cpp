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
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cout << a[0] * a[1] << " ";
        for (int i = 1; i < n - 1; i++)
            cout << a[i - 1] * a[i + 1] << " ";
        cout << a[n - 1] * a[n - 2] << endl;
    }

    return 0;
} /* Take Off Toward Your Dream ! */