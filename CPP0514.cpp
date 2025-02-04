#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define LL long long

struct SinhVien
{
    string msv = "B20DCCN0";
    string name, lop, dob;
    double gpa;
};
string chuanhoa(string s)
{
    string name;
    stringstream ss(s);
    string w;
    while (ss >> w)
    {
        for (int i = 0; i < w.size(); i++)
        {
            w[i] = tolower(w[i]);
        }
        w[0] = toupper(w[0]);
        name += " " + w;
    }
    name.erase(0, 1);
    return name;
}
void nhap(SinhVien ds[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        cin.ignore();
        getline(cin, ds[i].name);
        ds[i].name = chuanhoa(ds[i].name);
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
/* Take Off Toward Your Dream ! */