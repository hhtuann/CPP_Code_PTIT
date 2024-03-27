#include <bits/stdc++.h>
using namespace std;

#define LL long long
#define hhtuann "hhtuann"
#define inf int(1e9 + 7)
#define nmax int(1e6 + 7)

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

class NhanVien
{
public:
    string id, name, gender, dob, address, zip, date;
    NhanVien()
    {
        id = "00001";
        name = gender = dob = address = zip = date = "";
    }
    friend istream &operator>>(istream &cin, NhanVien &nv)
    {
        getline(cin, nv.name);
        cin >> nv.gender >> nv.dob;
        cin.ignore();
        getline(cin, nv.address);
        cin >> nv.zip >> nv.date;
        return cin;
    }
    friend ostream &operator>>(ostream &cout, NhanVien nv)
    {
        cout << nv.id << " " << nv.name << " " << nv.gender << " " << nv.dob << " " << nv.address << " " << nv.zip << " " << nv.date;
        return cout;
    }
};
int main()
{
    NhanVien a;
    cin >> a;
    cout >> a;
    return 0;
}