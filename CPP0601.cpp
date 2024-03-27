#include <bits/stdc++.h>
using namespace std;

#define LL long long
#define hhtuann "hhtuann"
#define inf int(1e9 + 7)
#define nmax int(1e6 + 7)

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

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
        cout << msv << " " << name << " " << clas << " " << dob << " ";
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