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
    friend PhanSo operator+(PhanSo x, PhanSo y)
    {
        PhanSo sum(1, 1);
        sum.tu = x.tu * y.mau + y.tu * x.mau;
        sum.mau = x.mau * y.mau;
        LL gcd = __gcd(sum.tu, sum.mau);
        sum.tu /= gcd;
        sum.mau /= gcd;
        return sum;
    }
};
int main()
{
    PhanSo p(1, 1), q(1, 1);
    cin >> p >> q;
    cout << p + q;
    return 0;
}