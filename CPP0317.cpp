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
        string a, ans = "YES";
        cin >> a;

        int n = a.size();
        for (int i = 0; i <= (n + 1) / 2; i++)
        {
            if (a[i] != a[n - i - 1] || (a[i] - '0') % 2 == 1)
            {
                ans = "NO";
                break;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
/* Take Off Toward Your Dream ! */