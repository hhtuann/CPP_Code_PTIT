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
        int n, ans = 1;
        cin >> n;

        if (n % 2 != 0)
        {
            cout << 0 << endl;
            continue;
        }

        n /= 2;
        for (int i = 2; i * i <= n; i++)
        {
            int cnt = 1;
            while (n % i == 0)
            {
                cnt++;
                n /= i;
            }
            ans *= cnt;
        }
        if (n > 1)
            ans *= 2;

        cout << ans << "\n";
    }

    return 0;
}
/* Take Off Toward Your Dream ! */