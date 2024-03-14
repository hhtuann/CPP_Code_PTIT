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

int id = 1;
class SinhVien
{
public:
    string msv, name, clas, dob;
    double gpa;
    SinhVien()
    {
        msv = "B20DCCN0";
        name = clas = dob = "";
        gpa = 0;
    }
    friend istream &operator>>(istream &cin, SinhVien &sv)
    {
        cin.ignore();
        getline(cin, sv.name);
        cin >> sv.clas >> sv.dob;
        cin >> sv.gpa;
        return cin;
    }
    friend ostream &operator<<(ostream &cout, SinhVien sv)
    {
        if (id < 10)
            sv.msv += "0";
        sv.msv += to_string(id);
        id++;
        if (sv.dob[2] != '/')
            sv.dob = "0" + sv.dob;
        if (sv.dob[5] != '/')
            sv.dob.insert(3, "0");
        cout << sv.msv << sp << sv.name << sp << sv.clas << sp << sv.dob << sp;
        cout << fixed << setprecision(2) << sv.gpa << endl;
        return cout;
    }
};
int main()
{
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
    {
        cin >> ds[i];
    }
    for (i = 0; i < N; i++)
    {
        cout << ds[i];
    }
    return 0;
}