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
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (auto &x : a)
            cin >> x;

        for (int i = k; i < n; i++)
            cout << a[i] << " ";
        for (int i = 0; i < k; i++)
            cout << a[i] << " ";

        cout << "\n";
    }

    return 0;
}
/* Take Off Toward Your Dream ! */