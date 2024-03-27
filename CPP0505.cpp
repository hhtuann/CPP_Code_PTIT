#include <bits/stdc++.h>
using namespace std;

#define LL long long
#define hhtuann "hhtuann"
#define inf int(1e9 + 7)
#define nmax int(1e6 + 7)

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

struct NhanVien
{
    string data[10];
};
void nhap(NhanVien &nv)
{
    nv.data[0] = "00001";
    for (int i = 1; i <= 6; i++)
    {
        getline(cin, nv.data[i]);
        // cin.ignore();
    }
}
void in(NhanVien &nv)
{
    for (int i = 0; i <= 6; i++)
    {
        cout << nv.data[i] << " ";
    }
}
int main()
{
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}