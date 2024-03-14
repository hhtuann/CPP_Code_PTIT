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
        cout << nv.data[i] << sp;
    }
}
int main()
{
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}