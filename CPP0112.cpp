/***** CPP0112 *****/
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
        double a, b, c, d;
        cin >> a >> b >> c >> d;
        double len = (a - c) * (a - c) + (b - d) * (b - d);
        len = sqrt(len);
        cout << fixed << setprecision(4) << len << "\n";
    }

    return 0;
}
/* Take Off Toward Your Dream ! */