#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define LL long long

int a[] = {5, 20, 38, 50, 38, 20, 8, 5, 0};

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
        cout << a[n - 1] << "\n";
    }

    return 0;
}
/* Take Off Toward Your Dream ! */