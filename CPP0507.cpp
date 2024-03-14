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
PhanSo tong(PhanSo x, PhanSo y)
{
    PhanSo sum;
    sum.a = x.a * y.b + y.a * x.b;
    sum.b = x.b * y.b;
    LL gcd = __gcd(sum.a, sum.b);
    sum.a /= gcd;
    sum.b /= gcd;
    return sum;
}
void in(PhanSo ps)
{
    cout << ps.a << "/" << ps.b;
}
int main()
{
    struct PhanSo p, q;
    nhap(p);
    nhap(q);
    PhanSo t = tong(p, q);
    in(t);
    return 0;
}