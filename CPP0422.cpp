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
        long long a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 0)
                s++;
            else
                cout << a[i] << " ";
        }
        for (int i = 0; i < s; i++)
            cout << 0 << " ";
        cout << endl;
    }

    return 0;
}
/* Take Off Toward Your Dream ! */