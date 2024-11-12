#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define LL long long

const int NMAX = 1e6 + 7;
bool a[NMAX];
int cnt[NMAX];

void era()
{
    a[0] = a[1] = 1;
    for (int i = 2; i * i < NMAX; i++)
        if (a[i] == 0)
            for (int j = i * i; j < NMAX; j += i)
                a[j] = 1;

    for (int i = 2; i < NMAX; i++)
        cnt[i] = cnt[i - 1] + (a[i] == 0);
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
        LL L, R;
        cin >> L >> R;

        int l = ceil(sqrt(L));
        int r = sqrt(R);

        cout << cnt[r] - cnt[l - 1] << "\n";
    }

    return 0;
}
/* Take Off Toward Your Dream ! */