#include <bits/stdc++.h>
using namespace std;

#define LL long long
#define hhtuann "hhtuann"
#define inf int(1e9 + 7)
#define nmax int(1e6 + 7)

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

void solve()
{
    // your solution
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
    int ans = inf;
    for (int i = cnt; i <= n; i++)
        ans = min(ans, v[i] - v[i - cnt]);
    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // input
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}