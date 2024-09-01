#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define LL long long

int nto(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, x, ok = -1;
        cin >> n;
        map<int, int> a;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            a[x]++;
            if (a[x] == 2 && ok == -1)
                ok = x;
        }
        cout << ok << endl;
    }

    return 0;
} /* Take Off Toward Your Dream ! */