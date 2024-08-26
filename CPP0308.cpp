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

        int cnt[200] = {};
        for (auto &c : s)
            cnt[c]++;

        for (auto &c : s)
            if (cnt[c] == 1)
                cout << c;

        cout << "\n";
    }

    return 0;
}
/* Take Off Toward Your Dream ! */