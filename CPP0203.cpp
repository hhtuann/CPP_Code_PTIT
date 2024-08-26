#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define LL long long

const int NMAX = 1e6 + 5;
const int INF = 1e9 + 7;

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

        set<int> st;
        for (int i = 0, x; i < n; i++)
        {
            cin >> x;
            if (x > 0)
                st.insert(x);
        }

        int idx = 1;
        for (auto &x : st)
        {
            if (x != idx)
                break;
            idx++;
        }

        cout << idx << "\n";
    }

    return 0;
}
/* Take Off Toward Your Dream ! */