/***** CPP0103 *****/
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
    double sum = 0;
    for (int i = 1; i <= n; i++)
        sum += 1.0 / i;
    cout << fixed << setprecision(4) << sum;

    return 0;
}
/* Take Off Toward Your Dream ! */