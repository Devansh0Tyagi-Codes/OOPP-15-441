#include <iostream>
using namespace std ;

class point {

    int x,y;

    public:
    point(int x = 0, int y = 0) : x{x}, y{y}{

    }

    point operator+(point t){
        return point (x +t.x, y+t.y);
    }


    void show()
    {
        cout<<x<<","<<y<<endl;
    }
};

int main ()
{
    point p(2,5) ,q (-5,4);
    point r  = p +q;


    p.show();
    q.show();
    r.show();
    return 0;
}