#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define LL long long

bool cmp(string a, string b)
{
    int i = 0, j = 0, k = 0;
    while (a[i] == b[j])
    {
        i++;
        j++;
        k++;
        if (i == a.size())
            i = 0;
        if (j == b.size())
            j = 0;
        if (k == a.size() + b.size())
            break;
    }
    return a[i] > b[j];
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end(), cmp);
        for (int i = 0; i < n; i++)
            cout << a[i];
        cout << endl;
    }

    return 0;
} /* Take Off Toward Your Dream ! */