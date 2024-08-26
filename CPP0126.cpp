#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define LL long long

const int NMAX = 1e6 + 5;
const int INF = 1e9 + 7;

bool p[NMAX];
void era()
{
    p[0] = p[1] = 1;
    for (int i = 2; i * i < NMAX; i++)
        if (p[i] == 0)
            for (int j = i * i; j < NMAX; j += i)
                p[j] = 1;
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
        int a, b;
        cin >> a >> b;
        for (int i = min(a, b); i <= max(a, b); i++)
            if (p[i] == 0)
                cout << i << " ";
        cout << "\n";
    }

    return 0;
}
/* Take Off Toward Your Dream ! */