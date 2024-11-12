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
        LL a, x, y;
        cin >> a >> x >> y;

        LL z = __gcd(x, y);
        for (int i = 0; i < z; i++)
            cout << a;

        cout << "\n";
    }

    return 0;
}
/* Take Off Toward Your Dream ! */