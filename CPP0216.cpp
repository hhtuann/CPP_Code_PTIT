#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define LL long long

string ans(vector<int> &a, int l, int r)
{
    int i;
    for (i = l; i < r; i++)
        if (a[i] > a[i + 1])
            break;
    for (i = i + 1; i < r; i++)
        if (a[i] < a[i + 1])
            return "No";
    return "Yes";
}
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

        vector<int> a(n);
        for (auto &x : a)
            cin >> x;

        int l, r;
        cin >> l >> r;

        cout << ans(a, l, r) << "\n";
    }

    return 0;
}
/* Take Off Toward Your Dream ! */