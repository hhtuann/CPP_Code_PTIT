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
    cin.ignore();

    set<string> st;
    for (int i = 0; i < n; i++)
    {
        string s;
        getline(cin, s);
        st.insert(s);
    }

    cout << st.size() << "\n";

    return 0;
}
/* Take Off Toward Your Dream ! */