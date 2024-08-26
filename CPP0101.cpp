/***** CPP0101 *****/
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
        LL sum = (n + 1) * n / 2;
        cout << sum << "\n";
    }

    return 0;
}
/* Take Off Toward Your Dream ! */