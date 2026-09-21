#include <iostream>
using namespace std;

class Coordinates
{
    int a, b;

public:
    void getData()
    {
        cout << "Enter two coordinates: ";
        cin >> a >> b;
    }

    void displayData()
    {
        cout << "First coordinate = " << a
             << ", Second coordinate = " << b << endl;
    }
};

int main()
{
    Coordinates pointA, pointB;

    pointA.getData();
    pointB.getData();

    cout << "Coordinates of Point A: ";
    pointA.displayData();

    cout << "Coordinates of Point B: ";
    pointB.displayData();

    return 0;
}