#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define LL long long
#define bigInt string

int cmp(bigInt a, bigInt b)
{
    a.insert(0, max(0, int(b.size() - a.size())), '0');
    b.insert(0, max(0, int(a.size() - b.size())), '0');

    if (a > b)
        return 1;
    if (a == b)
        return 0;
    if (a < b)
        return -1;
}
bigInt operator-(bigInt a, bigInt b)
{
    a.insert(0, max(0, int(b.size() - a.size())), '0');
    b.insert(0, max(0, int(a.size() - b.size())), '0');

    int carry = 0;
    bigInt res = "";
    for (int i = a.size() - 1; i >= 0; i--)
    {
        int mid = a[i] - b[i] - carry + 10;
        carry = (mid < 10) ? 1 : 0;
        res.push_back(mid % 10 + '0');
    }
    // while (res.back() == '0' && res.size() > 1)
    //     res.pop_back();
    reverse(res.begin(), res.end());
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

        if (cmp(a, b) < 0)
            swap(a, b);

        cout << a - b << "\n";
    }

    return 0;
}
/* Take Off Toward Your Dream ! */