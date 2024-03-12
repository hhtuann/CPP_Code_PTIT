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
    long long n;
    long long sum = 0;
    long long s = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        s *= i;
        sum += s;
    }
    cout << sum;
    return 0;
}