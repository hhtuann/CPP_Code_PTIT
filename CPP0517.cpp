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
            cout << nv[x].data[i] << sp;
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