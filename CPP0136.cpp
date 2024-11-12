#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define LL long long

const int NMAX = 1e6 + 7;
bool prime[NMAX];

void era()
{
    prime[0] = prime[1] = 1;
    for (int i = 2; i * i < NMAX; i++)
        if (prime[i] == 0)
            for (int j = i * i; j < NMAX; j += i)
                prime[j] = 1;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    era();
    int t;
    cin >> t;
    while (t--)
    {
        LL n;
        cin >> n;

        int cnt = 0;
        for (int i = 2; 1LL * i * i <= n; i++)
            if (prime[i] == 0)
                cnt++;

        cout << cnt << "\n";
    }

    return 0;
}
/* Take Off Toward Your Dream ! */