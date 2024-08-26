#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define LL long long

bool check(string &str, int &k)
{
    if (str.size() < 26)
        return 0;

    set<char> st;
    for (auto &c : str)
        st.insert(c);

    if (st.size() == 26)
        return 1;

    return st.size() + k >= 26 && str.size() >= st.size() + k;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int k;

        cin >> s >> k;

        cout << check(s, k) << "\n";
    }

    return 0;
}
/* Take Off Toward Your Dream ! */