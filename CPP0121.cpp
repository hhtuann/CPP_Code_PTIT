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
        LL a, b;
        cin >> a >> b;
        cout << a * b / __gcd(a, b) << " " << __gcd(a, b) << "\n";
    }

    return 0;
}
/* Take Off Toward Your Dream ! */