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
        int n;
        cin >> n;
        int a[n], b[n], j = n - 1;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        for (int i = 0; i < n; i += 2)
            b[i] = a[j--];
        for (int i = 1; i < n; i += 2)
            b[i] = a[(i - 1) / 2];
        for (int i = 0; i < n; i++)
            cout << b[i] << " ";
        cout << endl;
    }

    return 0;
} /* Take Off Toward Your Dream ! */