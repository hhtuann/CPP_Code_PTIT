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
    int t;
    cin >> t;
    while (t--)
    {
        double a, b, c, d;
        cin >> a >> b >> c >> d;
        double len = (a - c) * (a - c) + (b - d) * (b - d);
        len = sqrt(len);
        cout << fixed << setprecision(4) << len << endl;
    }
    return 0;
}