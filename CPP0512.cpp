#include <bits/stdc++.h>
using namespace std;

#define LL long long
#define name "hhtuann"
#define inf int(1e9 + 7)
#define nmax int(1e6 + 7)

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

struct PhanSo
{
    LL tu, mau;
    void rutgon()
    {
        LL gcd = __gcd(abs(tu), abs(mau));
        tu /= gcd;
        mau /= gcd;
    }
    friend PhanSo operator+(PhanSo A, PhanSo B)
    {
        PhanSo C;
        C.tu = A.tu * B.mau + A.mau * B.tu;
        C.mau = A.mau * B.mau;
        C.rutgon();
        return C;
    }
    friend PhanSo operator*(PhanSo A, PhanSo B)
    {
        PhanSo C;
        C.tu = A.tu * B.tu;
        C.mau = A.mau * B.mau;
        C.rutgon();
        return C;
    }
    void inra()
    {
        cout << tu << "/" << mau;
    }
};
void process(PhanSo A, PhanSo B)
{
    PhanSo C, D;
    C = (A + B) * (A + B);
    D = A * B * C;
    C.inra();
    cout << " ";
    D.inra();
    cout << "\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        PhanSo A;
        PhanSo B;
        cin >> A.tu >> A.mau >> B.tu >> B.mau;
        process(A, B);
    }
}