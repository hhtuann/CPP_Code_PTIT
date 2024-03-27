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
    int n;
    cin >> n;
    double sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += 1.0 / i;
    }
    cout << fixed << setprecision(4) << sum;
    return 0;
}