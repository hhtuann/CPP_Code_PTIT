/***** CPP0517 *****/
#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define LL long long

string id = "00000";
bool check = 1;
struct NhanVien
{
    string data[10];
};
string operator+(string s, int n)
{
    int tmp = n;
    for (int i = 4; i >= 0; i--)
    {
        int sum = s[i] - '0' + tmp;
        tmp = sum / 10;
        s[i] = sum % 10 + '0';
    }
    if (tmp)
        s = "1" + s;
    return s;
}
void nhap(NhanVien &nv)
{
    id = id + 1;
    nv.data[0] = id;
    if (check)
    {
        cin.ignore();
        check = 0;
    }
    for (int i = 1; i <= 6; i++)
    {
        getline(cin, nv.data[i]);
    }
}
void inds(NhanVien nv[], int n)
{
    for (int x = 0; x < n; x++)
    {
        for (int i = 0; i <= 6; i++)
        {
            cout << nv[x].data[i] << " ";
        }
        cout << endl;
    }
}
int main()
{
    struct NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        nhap(ds[i]);
    inds(ds, N);
    return 0;
}
/* Take Off Toward Your Dream ! */