#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define LL long long

struct NhanVien
{
    string data[10];
};
void nhap(NhanVien &nv)
{
    nv.data[0] = "00001";
    for (int i = 1; i <= 6; i++)
        getline(cin, nv.data[i]);
}
void in(NhanVien &nv)
{
    for (int i = 0; i <= 6; i++)
        cout << nv.data[i] << " ";
}
int main()
{
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
/* Take Off Toward Your Dream ! */