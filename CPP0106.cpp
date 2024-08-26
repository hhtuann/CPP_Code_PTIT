/***** CPP0106 *****/
#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define LL long long

bool check(string s)
{
    string rs = s;
    reverse(s.begin(), s.end());
    return rs == s;
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
            cout << "YES";
        else
            cout << "NO";
        cout << "\n";
    }

    return 0;
}
/* Take Off Toward Your Dream ! */