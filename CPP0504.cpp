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
    cout << sv.id << sp << sv.name << sp << sv.clas << sp << sv.dob << sp;
    cout << fixed << setprecision(2) << sv.gpa;
}
int main()
{
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}