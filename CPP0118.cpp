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
        vector<int> a;
        int n;
        cin >> n;

        for (int i = 2; i * i <= n; i++)
        {
            while (n % i == 0)
            {
                a.push_back(i);
                n /= i;
            }
        }
        if (n > 1)
            a.push_back(n);

        int ans = 0;
        if (a.size() == 3)
        {
            a.resize(unique(a.begin(), a.end()) - a.begin());
            if (a.size() == 3)
                ans = 1;
        }

        cout << ans << "\n";
    }

    return 0;
}
/* Take Off Toward Your Dream ! */