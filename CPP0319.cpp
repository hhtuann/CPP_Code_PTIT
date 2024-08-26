#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define LL long long

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, s;
    cin >> m >> s;

    if (s == 0)
    {
        if (m == 1)
            cout << "0 0";
        else
            cout << "-1 -1";
        return 0;
    }
    if (s > 9 * m)
    {
        cout << "-1 -1";
        return 0;
    }

    string nMax = "", nMin;

    for (int i = 0; i < m; i++)
    {
        nMax += to_string(min(s, 9));
        s -= min(s, 9);
    }

    nMin = nMax;
    reverse(nMin.begin(), nMin.end());

    if (nMin[0] == '0')
    {
        for (int i = 1; i < m; i++)
        {
            if (nMin[i] != '0')
            {
                nMin[0] = '1';
                nMin[i]--;
                break;
            }
        }
    }

    cout << nMin << " " << nMax << "\n";

    return 0;
}
/* Take Off Toward Your Dream ! */