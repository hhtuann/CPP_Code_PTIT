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

struct PhanSo
{
    LL a, b;
};
void nhap(PhanSo &ps)
{
    cin >> ps.a >> ps.b;
}
void in(PhanSo ps)
{
    cout << ps.a << "/" << ps.b;
}
void rutgon(PhanSo &ps)
{
    LL gcd = __gcd(ps.a, ps.b);
    ps.a /= gcd;
    ps.b /= gcd;
}
int main()
{
    struct PhanSo p;
    nhap(p);
    rutgon(p);
    in(p);
    return 0;
}