#include <iostream>
#include <cmath>

using namespace std;

struct Point {
    double x, y;
};

Point hToC(int h)
{
    const double pi = 3.14159265358979323846;
    double angle = (h / 12.0) * 2 * pi;
    Point p;
    p.x = cos(angle);
    p.y = sin(angle);
    return p;
}

int ori(Point p, Point q, Point r)
{
    double v = (q.x - p.x) * (r.y - p.y) - (q.y - p.y) * (r.x - p.x);
    if (v == 0) return 0;
    return (v > 0) ? 1 : 2;
}

bool intersect(Point A, Point B, Point C, Point D)
{
    int o1 = ori(A, B, C);
    int o2 = ori(A, B, D);
    int o3 = ori(C, D, A);
    int o4 = ori(C, D, B);

    if (o1 != o2 && o3 != o4) return true;

    if (o1 == 0 && (C.x >= min(A.x, B.x) && C.x <= max(A.x, B.x) && C.y >= min(A.y, B.y) && C.y <= max(A.y, B.y)))
        return true;

    if (o2 == 0 && (D.x >= min(A.x, B.x) && D.x <= max(A.x, B.x) && D.y >= min(A.y, B.y) && D.y <= max(A.y, B.y)))
        return true;

    if (o3 == 0 && (A.x >= min(C.x, D.x) && A.x <= max(C.x, D.x) && A.y >= min(C.y, D.y) && A.y <= max(C.y, D.y)))
        return true;

    if (o4 == 0 && (B.x >= min(C.x, D.x) && B.x <= max(C.x, D.x) && B.y >= min(C.y, D.y) && B.y <= max(C.y, D.y)))
        return true; 

    return false;
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int a,b,c,d;
        Point A, B, C, D;
        cin >> a >> b >> c >> d;
        A = hToC(a);
        B = hToC(b);
        C = hToC(c);
        D = hToC(d);

        if(intersect(A,B,C,D))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
