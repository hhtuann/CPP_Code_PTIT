/***** CPP0102 *****/
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
        char c;
        cin >> c;
        if (islower(c))
            cout << char(toupper(c));
        else
            cout << char(tolower(c));
        cout << "\n";
    }

    return 0;
}
/* Take Off Toward Your Dream ! */