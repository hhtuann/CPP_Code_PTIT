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
        LL n;
        cin >> n;
        for (LL i = 2; i * i <= n; i++)
        {
            while (n % i == 0)
            {
                n /= i;
                cout << i << " ";
            }
        }
        if (n > 1)
            cout << n;
        cout << "\n";
    }
    return 0;
}
/* Take Off Toward Your Dream ! */