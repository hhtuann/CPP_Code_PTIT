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
        string s;
        cin >> s;
        for (int i = 0; i < s.size() - 2; i++)
        {
            if (s[i] == '0' && s[i + 1] == '8' && s[i + 2] == '4')
            {
                s.erase(i, 3);
                break;
            }
        }
        cout << s << endl;
    }
    return 0;
}