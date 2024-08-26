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
    cin.ignore();
    while (t--)
    {
        string s, word;
        getline(cin, s);

        int cnt = 0;
        stringstream ss(s);
        while (ss >> word)
            cnt++;

        cout << cnt << "\n";
    }

    return 0;
}
/* Take Off Toward Your Dream ! */