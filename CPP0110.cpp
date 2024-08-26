/***** CPP0110 *****/
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
        for (int i = 0; i < s.size() - 2; i++)
        {
            if (s[i] == '0' && s[i + 1] == '8' && s[i + 2] == '4')
            {
                s.erase(i, 3);
                break;
            }
        }
        cout << s << "\n";
    }

    return 0;
}
/* Take Off Toward Your Dream ! */