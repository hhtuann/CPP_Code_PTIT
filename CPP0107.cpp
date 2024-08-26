/***** CPP0107 *****/
#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define LL long long

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string ans[5];
    ans[1] = "0ABBADCCABDCCABD";
    ans[2] = "0ACCABCDDBBCDDBB";
    int t;
    cin >> t;
    while (t--)
    {
        int id;
        cin >> id;
        char c;
        double point = 0;
        for (int i = 1; i <= 15; i++)
        {
            cin >> c;
            if (c == ans[id - 100][i])
                point++;
        }
        cout << fixed << setprecision(2) << point * 10 / 15 << "\n";
    }

    return 0;
}
/* Take Off Toward Your Dream ! */