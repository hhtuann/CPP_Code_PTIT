#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define LL long long

struct Data
{
    int m, s;
};
bool cmp(Data a, Data b)
{
    if (a.s == b.s)
        return a.m < b.m;
    return a.s > b.s;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n;
        vector<Data> a;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            int ok = 0;
            for (int j = 0; j < a.size(); j++)
            {
                if (a[j].m == x)
                {
                    ok = 1;
                    a[j].s++;
                }
            }
            if (ok == 0)
            {
                struct Data b;
                b.m = x;
                b.s = 1;
                a.push_back(b);
            }
        }
        sort(a.begin(), a.end(), cmp);
        for (int i = 0; i < a.size(); i++)
        {
            for (int j = 0; j < a[i].s; j++)
                cout << a[i].m << " ";
        }
        cout << endl;
    }

    return 0;
} /* Take Off Toward Your Dream ! */