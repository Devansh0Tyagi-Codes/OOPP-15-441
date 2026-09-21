#include <iostream>
using namespace std;

class point
{
    int x, y;

public:
    point(int x = 0, int y = 0) : x{x}, y{y}
    {
    }

    void show()
    {
        cout << x << "," << y << endl;
    }

    friend point operator+(point, point);
};

point operator+(point t1, point t2)
{
    return point(t1.x + t2.x, t1.y + t2.y);
}
ostream &operator<<(ostream &os, point t)
{
    return point (x+t.x,y+t.y);

};

{
    os << t.x << "," << t.y << endl;
    return os;
}

int main()
{
    point p(2, 5), q(-5, 4);

    point r = p + q;

    p.show();
    q.show();
    r.show();

    return 0;
}