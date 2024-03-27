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
    friend istream &operator>>(istream &cin, SinhVien &a)
    {
        getline(cin, a.name);
        cin >> a.clas >> a.dob;
        cin >> a.gpa;
        return cin;
    }
    friend ostream &operator<<(ostream &cout, SinhVien a)
    {
        if (a.dob[2] != '/')
            a.dob = '0' + a.dob;
        if (a.dob[5] != '/')
            a.dob.insert(3, "0");
        cout << a.msv << " " << a.name << " " << a.clas << " " << a.dob << " ";
        cout << fixed << setprecision(2) << a.gpa;
        return cout;
    }
};
int main()
{
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}