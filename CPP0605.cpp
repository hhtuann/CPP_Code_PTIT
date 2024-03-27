#include <bits/stdc++.h>
using namespace std;

#define LL long long
#define hhtuann "hhtuann"
#define inf int(1e9 + 7)
#define nmax int(1e6 + 7)

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

class PhanSo
{
public:
    LL tu, mau;
    PhanSo(LL a, LL b)
    {
        tu = a;
        mau = b;
    }
    void rutgon()
    {
        LL gcd = __gcd(tu, mau);
        tu /= gcd;
        mau /= gcd;
    }
    friend istream &operator>>(istream &cin, PhanSo &ps)
    {
        cin >> ps.tu >> ps.mau;
        return cin;
    }
    friend ostream &operator<<(ostream &cout, PhanSo ps)
    {
        cout << ps.tu << "/" << ps.mau;
        return cout;
    }
};
int main()
{
    PhanSo p(1, 1);
    cin >> p;
    p.rutgon();
    cout << p;
    return 0;
}