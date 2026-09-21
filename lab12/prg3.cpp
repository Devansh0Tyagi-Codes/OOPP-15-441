#include <iostream>

using namespace std;

class Coordinates
{
    int a, b;

public:
    Coordinates(int a = 0, int b = 0) : a{a},
                                        b{b}
    {
    }

    friend ostream &operator<<(ostream &os, Coordinates c);

    Coordinates operator+(Coordinates c)
    {
        return Coordinates(a + c.a, b + c.b);
    }
};

ostream &operator<<(ostream &os, Coordinates c)
{
    os << c.a << ", " << c.b << endl;
    return os;
}

int main()
{
    Coordinates point1(12, 5), point2(-5, 7);

    Coordinates result = point1 + point2;

    cout << "First Point: " << point1;
    cout << "Second Point: " << point2;
    cout << "Sum of Points: " << result;

    return 0;
}