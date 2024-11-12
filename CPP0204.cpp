#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define LL long long

const int NMAX = 1e5 + 5;
bool prime[NMAX];
int cnt[NMAX];

void era()
{
    memset(prime, true, sizeof(prime));
    prime[0] = prime[1] = false;
    for (int i = 2; i * i <= NMAX; i++)
        if (prime[i])
            for (int j = i * i; j <= NMAX; j += i)
                prime[j] = false;

    for (int i = 2; i <= NMAX; i++)
        cnt[i] = cnt[i - 1] + prime[i];
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
        int m, n;
        cin >> m >> n;
        cout << cnt[n] - cnt[m - 1] << "\n";
    }

    return 0;
}
/* Take Off Toward Your Dream ! */