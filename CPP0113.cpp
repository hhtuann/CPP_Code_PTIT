/***** CPP0113 *****/
#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define LL long long

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
        int n = s.size();
        if (s[n - 1] == '6' && s[n - 2] == '8')
            cout << 1 << "\n";
        else
            cout << 0 << "\n";
    }

    return 0;
}
/* Take Off Toward Your Dream ! */