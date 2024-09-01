#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define LL long long

struct PhanSo
{
    LL a, b;
};
void nhap(PhanSo &ps)
{
    cin >> ps.a >> ps.b;
}
void in(PhanSo &ps)
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
/* Take Off Toward Your Dream ! */