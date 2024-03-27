#include <bits/stdc++.h>
using namespace std;

#define LL long long
#define hhtuann "hhtuann"
#define inf int(1e9 + 7)
#define nmax int(1e6 + 7)

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

struct Point
{
    double x, y;
};
void input(Point &a)
{
    cin >> a.x >> a.y;
}
double distance(Point a, Point b)
{
    double d = (a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y);
    d = sqrt(d);
    return d;
}
int main()
{
    struct Point A, B;
    int t;
    cin >> t;
    while (t--)
    {
        input(A);
        input(B);
        cout << fixed << setprecision(4) << distance(A, B) << endl;
    }
    return 0;
}