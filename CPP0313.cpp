#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define LL long long

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, del, word;
    getline(cin, s);
    cin >> del;

    stringstream ss(s);
    while (ss >> word)
    {
        if (word != del)
            cout << word << " ";
    }

    return 0;
}
/* Take Off Toward Your Dream ! */