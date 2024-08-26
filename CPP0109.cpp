/***** CPP0109 *****/
#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define LL long long

bool check(int n)
{
    int odd = 0;
    int even = 0;
    while (n)
    {
        int k = n % 10;
        if (k % 2)
            odd++;
        else
            even++;
        n /= 10;
    }
    return odd == even;
}
int pow10(int n)
{
    int sum = 1;
    for (int i = 1; i <= n; i++)
        sum *= 10;
    return sum;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int a = pow10(n - 1);
    int b = pow10(n);
    int cnt = 0;
    for (int i = a; i < b; i++)
    {
        if (cnt == 10)
        {
            cout << "\n";
            cnt = 0;
        }
        if (check(i))
        {
            cnt++;
            cout << i << " ";
        }
    }

    return 0;
}
/* Take Off Toward Your Dream ! */