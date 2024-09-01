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
        int x;
        cin >> x;

        cin.ignore();
        string a;
        getline(cin, a);
        int n = a.size();
        int b[10] = {};
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= '0' && a[i] <= '9')
                b[a[i] - '0']++;
        }
        for (int i = 0; i <= 9; i++)
        {
            if (b[i] > 0)
                cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
/* Take Off Toward Your Dream ! */