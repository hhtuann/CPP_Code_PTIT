#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define LL long long

const int NMAX = 1e6 + 5;
const int INF = 1e9 + 7;

LL f[100];
void fibo()
{
    f[1] = f[2] = 1;
    for (int i = 3; i <= 92; i++)
        f[i] = f[i - 1] + f[i - 2];
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
        int n;
        cin >> n;
        cout << f[n] << "\n";
    }

    return 0;
}
/* Take Off Toward Your Dream ! */