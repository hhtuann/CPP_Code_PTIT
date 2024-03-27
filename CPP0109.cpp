#include <bits/stdc++.h>
using namespace std;

#define LL long long
#define hhtuann "hhtuann"
#define inf int(1e9 + 7)
#define nmax int(1e6 + 7)

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // input
    int n;
    cin >> n;
    int a = pow10(n - 1);
    int b = pow10(n);
    int cnt = 0;
    for (int i = a; i < b; i++)
    {
        if (cnt == 10)
        {
            cout << endl;
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