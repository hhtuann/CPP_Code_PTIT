#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define LL long long

const int NMAX = 1e5 + 7;
int a[NMAX];

void era()
{
    a[0] = a[1] = 1;
    for (int i = 2; i < NMAX; i++)
        a[i] = i;
    for (int i = 2; i * i < NMAX; i++)
        if (a[i] == i)
            for (int j = i * i; j < NMAX; j += i)
                if (a[j] == j)
                    a[j] = i;
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
        int n;
        cin >> n;

        for (int i = 1; i <= n; i++)
            cout << a[i] << " ";

        cout << "\n";
    }

    return 0;
}
/* Take Off Toward Your Dream ! */