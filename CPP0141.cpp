#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define LL long long

LL f[100];

void fibo()
{
    f[1] = 1;
    for (int i = 2; i < 100; i++)
        f[i] = f[i - 2] + f[i - 1];
}
string check(LL n)
{
    for (int i = 0; i < 100; i++)
        if (f[i] == n)
            return "YES";
    return "NO";
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    fibo();
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