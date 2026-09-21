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

    void display()
    {
        cout << a << ", " << b << endl;
    }

    friend Coordinates operator+(Coordinates, Coordinates);
};

Coordinates operator+(Coordinates c1, Coordinates c2)
{
    return Coordinates(c1.a + c2.a, c1.b + c2.b);
}

int main()
{
    Coordinates point1(12, 6), point2(-5, 7);

    Coordinates result = point1 + point2;

    cout << "First Point: ";
    point1.display();

    cout << "Second Point: ";
    point2.display();

    cout << "Sum of Points: ";
    result.display();

    return 0;
}