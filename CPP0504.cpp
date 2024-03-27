#include <bits/stdc++.h>
using namespace std;

#define LL long long
#define hhtuann "hhtuann"
#define inf int(1e9 + 7)
#define nmax int(1e6 + 7)

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

struct SinhVien
{
    string id, name, dob, clas;
    double gpa;
};
void nhap(SinhVien &sv)
{
    sv.id = "B20DCCN001";
    getline(cin, sv.name);
    cin >> sv.clas >> sv.dob;
    cin >> sv.gpa;
}
void in(SinhVien &sv)
{
    if (sv.dob[2] != '/')
        sv.dob = "0" + sv.dob;
    if (sv.dob[5] != '/')
        sv.dob.insert(3, "0");
    cout << sv.id << " " << sv.name << " " << sv.clas << " " << sv.dob << " ";
    cout << fixed << setprecision(2) << sv.gpa;
}
int main()
{
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}