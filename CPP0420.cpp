#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define LL long long

struct Data
{
    int x, ii, xx;
};
bool cmp(Data a, Data b)
{
    if (a.xx == b.xx)
        return a.ii < b.ii;
    else
        return a.xx < b.xx;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<Data> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i].x;
            a[i].ii = i;
            a[i].xx = abs(a[i].x - k);
        }
        sort(a.begin(), a.end(), cmp);
        for (int i = 0; i < n; i++)
            cout << a[i].x << " ";
        cout << endl;
    }

    return 0;
}
/* Take Off Toward Your Dream ! */