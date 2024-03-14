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
        cout << a.msv << sp << a.name << sp << a.clas << sp << a.dob << sp;
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