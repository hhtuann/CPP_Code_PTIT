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

void PrimeFactorization(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        int cnt = 0;
        while (n % i == 0)
        {
            cnt++;
            n /= i;
        }
        if (cnt)
            cout << i << " " << cnt << " ";
    }
    if (n > 1)
        cout << n << " " << 1;
}
int main()
{
    ONLY_CPP
    // input
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        PrimeFactorization(n);
        cout << endl;
    }
    return 0;
}