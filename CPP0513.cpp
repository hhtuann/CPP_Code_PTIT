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
    string msv = "B20DCCN0";
    string name, lop, dob;
    double gpa;
};
void nhap(SinhVien ds[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        cin.ignore();
        getline(cin, ds[i].name);
        cin >> ds[i].lop >> ds[i].dob >> ds[i].gpa;
        if (i < 10)
            ds[i].msv += "0" + to_string(i);
        else
            ds[i].msv += to_string(i);
        if (ds[i].dob[2] != '/')
            ds[i].dob.insert(0, "0");
        if (ds[i].dob[5] != '/')
            ds[i].dob.insert(3, "0");
    }
}
void in(SinhVien ds[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << ds[i].msv << " " << ds[i].name << " " << ds[i].lop << " " << ds[i].dob << " ";
        cout << fixed << setprecision(2) << ds[i].gpa << "\n";
    }
}
int main()
{
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}