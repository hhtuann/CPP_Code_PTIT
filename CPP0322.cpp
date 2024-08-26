#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define LL long long
#define bigInt string

bigInt operator+(bigInt a, bigInt b)
{
    a.insert(0, max(0, int(b.size() - a.size())), '0');
    b.insert(0, max(0, int(a.size() - b.size())), '0');
    cout << a << "\n"
         << b << "\n";
    int carry = 0;
    bigInt res = "";
    for (int i = a.size() - 1; i >= 0; i--)
    {
        int mid = (a[i] - '0') + (b[i] - '0') + carry;
        carry = mid / 10;
        res = to_string(mid % 10) + res;
    }
    if (carry > 0)
        res = '1' + res;
    return res;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        bigInt a, b;
        cin >> a >> b;

        cout << a + b << "\n";
    }

    return 0;
}
/* Take Off Toward Your Dream ! */