#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define LL long long

const int MAXN = 1e5 + 5;
bool prime[MAXN];
int phi[MAXN];

void era()
{
    memset(prime, 1, sizeof(prime));
    prime[0] = prime[1] = 0;
    for (int i = 2; i * i < MAXN; i++)
        if (prime[i])
            for (int j = i * i; j < MAXN; j += i)
                prime[j] = 0;
}
void euler()
{
    for (int i = 1; i < MAXN; i++)
        phi[i] = i;
    for (int i = 2; i < MAXN; i++)
        if (phi[i] == i)
            for (int j = i; j < MAXN; j += i)
                phi[j] -= phi[j] / i;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    era();
    euler();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << prime[phi[n]] << "\n";
    }

    return 0;
}
/* Take Off Toward Your Dream ! */