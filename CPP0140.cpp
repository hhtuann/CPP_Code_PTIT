#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define LL long long

int a[] = {2, 3, 5, 7, 13, 17, 19};

bool check(LL n)
{
    for (auto x : a)
        if (n == (pow(2, x) - 1) * pow(2, x - 1))
            return true;
    return false;
}
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
        cout << check(n) << "\n";
    }

    return 0;
}
/* Take Off Toward Your Dream ! */