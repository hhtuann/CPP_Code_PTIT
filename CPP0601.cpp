#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define LL long long

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
/* Take Off Toward Your Dream ! */