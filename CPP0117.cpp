/***** CPP0117 *****/
#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define LL long long

int solve(int n)
{
    // your solution
    while (n > 9)
    {
        int sum = 0;
        while (n)
        {
            sum += n % 10;
            n /= 10;
        }
        n = sum;
    }
    return n;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << solve(n) << "\n";
    }

    return 0;
}
/* Take Off Toward Your Dream ! */