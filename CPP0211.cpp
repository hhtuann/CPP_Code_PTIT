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

        vector<int> a(n), sufMax(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        sufMax[n - 1] = a[n - 1];
        for (int i = n - 2; i >= 0; i--)
            sufMax[i] = max(sufMax[i + 1], a[i]);

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            // trả về vị trí cuối cùng của phần tử lớn hơn a[i]
            int pos = sufMax.rend() - upper_bound(sufMax.rbegin(), sufMax.rend(), a[i]) - 1;
            if (pos >= 0)
                ans = max(ans, pos - i);
        }

        cout << ans << "\n";
    }
    return 0;
}
/* Take Off Toward Your Dream ! */