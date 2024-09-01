#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define LL long long

bool check(string s)
{
    for (int i = 1; i < s.size(); i++)
        if (abs(s[i] - s[i - 1]) != 1)
            return false;
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
        string s;
        cin >> s;
        if (check(s))
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }

    return 0;
}
/* Take Off Toward Your Dream ! */