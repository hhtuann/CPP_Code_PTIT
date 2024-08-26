/***** CPP0423 *****/
#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define LL long long

const int INF = 1e9 + 7;

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
        vector<int> v;
        v.push_back(0);
        int cnt = n;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            v.push_back(v[i - 1]);
            if (x > k)
            {
                cnt--;
                v[i]++;
            }
        }
        int ans = INF;
        for (int i = cnt; i <= n; i++)
            ans = min(ans, v[i] - v[i - cnt]);
        cout << ans << "\n";
    }

    return 0;
}
/* Take Off Toward Your Dream ! */