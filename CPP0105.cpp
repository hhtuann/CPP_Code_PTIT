/***** CPP0105 *****/
#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define LL long long

bool check(int n)
{
    while (n)
    {
        int k = n % 10;
        if (k != 8 && k != 6 && k != 0)
            return false;
        n /= 10;
    }
    return true;
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
        if (check(n))
            cout << "YES";
        else
            cout << "NO";
        cout << "\n";
    }

    return 0;
}
/* Take Off Toward Your Dream ! */