#include <bits/stdc++.h>
using namespace std;

#define LL long long
#define hhtuann "hhtuann"
#define inf int(1e9 + 7)
#define nmax int(1e6 + 7)

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
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