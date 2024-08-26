/***** CPP0502 *****/
#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define LL long long

struct ThiSinh
{
    string name, dob;
    double a, b, c;
};
void nhap(ThiSinh &sv)
{
    getline(cin, sv.name);
    cin >> sv.dob;
    cin >> sv.a >> sv.b >> sv.c;
}
void in(ThiSinh &sv)
{
    cout << sv.name << " " << sv.dob << " ";
    cout << fixed << setprecision(1) << sv.a + sv.b + sv.c;
}
int main()
{
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
/* Take Off Toward Your Dream ! */