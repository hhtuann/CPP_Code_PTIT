#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define LL long long

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    set<int> st;
    for (int i = 0, x; i < n; i++)
    {
        cin >> x;
        st.insert(x);
    }

    for (auto &x : st)
        cout << x << " ";

    cout << "\n";

    return 0;
}
/* Take Off Toward Your Dream ! */