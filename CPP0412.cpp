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
        int n, x;
        cin >> n;
        int a[3] = {};
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            a[x]++;
        }
        for (int i = 0; i < a[0]; i++)
            cout << 0 << " ";
        for (int i = 0; i < a[1]; i++)
            cout << 1 << " ";
        for (int i = 0; i < a[2]; i++)
            cout << 2 << " ";
        cout << endl;
    }

    return 0;
}
/* Take Off Toward Your Dream ! */