#include <bits/stdc++.h>
using namespace std;

#define LL long long
#define hhtuann "hhtuann"
#define inf int(1e9 + 7)
#define nmax int(1e6 + 7)

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
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