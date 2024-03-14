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

class SinhVien
{
public:
    string msv, name, clas, dob;
    double gpa;
    SinhVien()
    {
        msv = "B20DCCN001";
        name = clas = dob = "";
        gpa = 0;
    }
    void nhap()
    {
        getline(cin, name);
        cin >> clas >> dob;
        cin >> gpa;
    }
    void xuat()
    {
        if (dob[2] != '/')
            dob = '0' + dob;
        if (dob[5] != '/')
            dob.insert(3, "0");
        cout << msv << sp << name << sp << clas << sp << dob << sp;
        cout << fixed << setprecision(2) << gpa;
    }
};
int main()
{
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}