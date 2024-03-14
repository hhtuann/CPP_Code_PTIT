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
        getline(cin, this->name);
        cin >> this->clas >> this->dob;
        cin >> gpa;
    }
    void xuat()
    {
        if (this->dob[2] != '/')
            this->dob = '0' + this->dob;
        if (this->dob[5] != '/')
            this->dob.insert(3, "0");
        cout << this->msv << sp << this->name << sp << this->clas << sp << this->dob << sp;
        cout << fixed << setprecision(2) << this->gpa;
    }
};
int main()
{
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}