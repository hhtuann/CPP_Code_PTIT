#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define LL long long

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0, x; j < 3; j++)
        {
            cin >> x;
            cnt += x;
        }
        ans += (cnt > 1);
    }

    cout << ans << "\n";

    return 0;
}
/* Take Off Toward Your Dream ! */