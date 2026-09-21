#include <iostream>
using namespace std;

class Coordinates
{
    int a, b;

public:
    void setCoordinates(int p = 0, int q = 0);
    void displayCoordinates();
};

inline void Coordinates::setCoordinates(int p, int q)
{
    a = p;
    b = q;
}

inline void Coordinates::displayCoordinates()
{
    cout << "First coordinate = " << a
         << ", Second coordinate = " << b << endl;
}

int main()
{
    Coordinates pointA, pointB;

    int p, q;

    cout << "Enter coordinates of Point A: ";
    cin >> p >> q;
    pointA.setCoordinates(p, q);

    cout << "Enter coordinates of Point B: ";
    cin >> p >> q;
    pointB.setCoordinates(p, q);

    cout << "Point A: ";
    pointA.displayCoordinates();

    cout << "Point B: ";
    pointB.displayCoordinates();

    return 0;
}