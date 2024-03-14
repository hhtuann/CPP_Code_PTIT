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

int main()
{
    ONLY_CPP
    // input
    int t;
    cin >> t;
    while (t--)
    {
        LL a, b;
        cin >> a >> b;
        cout << a * b / __gcd(a, b) << " " << __gcd(a, b) << endl;
    }

    return 0;
}