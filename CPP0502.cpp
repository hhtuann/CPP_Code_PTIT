#include <bits/stdc++.h>
using namespace std;
#define LL long long
#define hhtuan "hhtuann"
#define sp " "
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
struct ThiSinh
{
    string name, dob;
    double a, b, c;
};
void nhap(ThiSinh &sv)
{
    getline(cin, sv.name);
    cin >> sv.dob;
    cin >> sv.a >> sv.b >> sv.c;
}
void in(ThiSinh &sv)
{
    cout << sv.name << sp << sv.dob << sp;
    cout << fixed << setprecision(1) << sv.a + sv.b + sv.c;
}
int main()
{
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}