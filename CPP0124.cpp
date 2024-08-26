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
    for (int i = 2; i * i <= n; i++)
    {
        int cnt = 0;
        while (n % i == 0)
        {
            cnt++;
            n /= i;
        }
        if (cnt)
            cout << i << " " << cnt << "\n";
    }
    if (n > 1)
        cout << n << " " << 1;
    cout << "\n";

    return 0;
}
/* Take Off Toward Your Dream ! */