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
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        deque<int> dq;
        for (int i = 0; i < n; i++)
        {
            while (!dq.empty() && a[dq.back()] <= a[i])
                dq.pop_back();
            dq.push_back(i);

            while (dq.front() + k <= i)
                dq.pop_front();

            if (i >= k - 1)
                cout << a[dq.front()] << " ";
        }
        cout << "\n";
    }

    return 0;
}
/* Take Off Toward Your Dream ! */