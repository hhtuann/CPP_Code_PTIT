#include <bits/stdc++.h>
using namespace std;

#define LL long long
#define hhtuann "hhtuann"
#define inf int(1e9 + 7)
#define nmax int(1e6 + 7)

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

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