#include <bits/stdc++.h>
using namespace std;
#define LL long long
#define hhtuan "hhtuann"
#define ONLY_CPP                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define inf int(1e9 + 7)
#define nmax int(1e6 + 7)
/* ...............................
hhtuann._
________ Hoang Hoang Tuan ________
__ Take Off Toward Your Dream ! __
............................... */

LL f[1000000];
LL lcm(LL a, LL b)
{
    return a * b / __gcd(a, b);
}
void solve()
{
    f[0] = 1;
    for (LL i = 1; i < 1000000; i++)
    {
        f[i] = lcm(f[i - 1], i);
    }
}
int main()
{
    ONLY_CPP
    // input
    solve();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << f[n] << endl;
    }
    return 0;
}