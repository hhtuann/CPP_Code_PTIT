#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define LL long long

const int NMAX = 1e6 + 5;
const int INF = 1e9 + 7;

bool isPrime(int n)
{
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return n > 1;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    if (isPrime(n))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
/* Take Off Toward Your Dream ! */