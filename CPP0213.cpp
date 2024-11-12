#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define LL long long

set<LL> st;

void prepare()
{
    vector<LL> fibo(100);
    fibo[0] = 0;
    fibo[1] = 1;
    st.insert(0);
    st.insert(1);
    for (int i = 2; i <= 50; i++)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
        st.insert(fibo[i]);
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    prepare();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        for (int i = 1, x; i <= n; i++)
        {
            cin >> x;
            if (st.count(x))
                cout << x << " ";
        }
        cout << "\n";
    }

    return 0;
}
/* Take Off Toward Your Dream ! */