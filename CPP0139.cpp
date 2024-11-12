#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define LL long long

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
int sumDigit(int n)
{
    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int sumPrime(int n)
{
    int sum = 0;
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            sum += sumDigit(i);
            n /= i;
        }
    }
    if (n > 1)
        sum += sumDigit(n);
    return sum;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (!isPrime(n) && sumDigit(n) == sumPrime(n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
/* Take Off Toward Your Dream ! */