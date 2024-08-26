/***** CPP0104 *****/
#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define LL long long

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    LL n, sum = 0, gt = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        gt *= i;
        sum += gt;
    }
    cout << sum;

    return 0;
}
/* Take Off Toward Your Dream ! */