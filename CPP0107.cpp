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

string ans[105];

int main()
{
    ONLY_CPP
    // input
    ans[101] = "0ABBADCCABDCCABD";
    ans[102] = "0ACCABCDDBBCDDBB";
    int t;
    cin >> t;
    while (t--)
    {
        int id;
        cin >> id;
        char c;
        double point = 0;
        for (int i = 1; i <= 15; i++)
        {
            cin >> c;
            if (c == ans[id][i])
                point++;
        }
        cout << fixed << setprecision(2) << point * 10 / 15 << endl;
    }
    return 0;
}