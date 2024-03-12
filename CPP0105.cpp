#include <bits/stdc++.h>
using namespace std;
#define LL long long
#define hhtuan "hhtuann"
#define ONLY_CPP                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define inf int(1e9 + 7)
#define nmax int(1e6 + 7)
/* ...............................
hhtuann._
________ Hoang Hoang Tuan ________
__ Take Off Toward Your Dream ! __
............................... */

bool check(int n)
{
    while (n)
    {
        int k = n % 10;
        if (k != 8 && k != 6 && k != 0)
            return 0;
        n /= 10;
    }
    return 1;
}
int main()
{
    ONLY_CPP
    // input
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (check(n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}