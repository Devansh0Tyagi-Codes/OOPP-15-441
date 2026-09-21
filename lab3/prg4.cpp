#include <iostream>
using namespace std;

class Calculator
{
public:
    double calculate(double r)
    {
        return 3.14159 * r * r;
    }

    double calculate(double l, double w)
    {
        return l * w;
    }

    int calculate(int s)
    {
        return s * s;
    }

    double calculate(double b, double h, bool isTriangle)
    {
        return 0.5 * b * h;
    }
};

int main()
{
    Calculator calc;

    double r = 7;
    double l = 12;
    double w = 8;
    int s = 5;
    double b = 10;
    double h = 6;

    cout << "Circle Area: " << calc.calculate(r) << endl;
    cout << "Rectangle Area: " << calc.calculate(l, w) << endl;
    cout << "Square Area: " << calc.calculate(s) << endl;
    cout << "Triangle Area: " << calc.calculate(b, h, true) << endl;

    return 0;
}