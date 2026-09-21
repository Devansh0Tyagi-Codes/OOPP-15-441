#include <iostream>
using namespace std;

inline int calculateTotal(int x, int y)
{
    return x + y;
}

int calculateSum(int x, int y, int z = 0)
{
    return x + y + z;
}

double calculateProduct(double x, double y)
{
    return x * y;
}

int main()
{
    cout << "Total: " << calculateTotal(15, 25) << endl;

    cout << "Sum of two values: "
         << calculateSum(15, 25) << endl;

    cout << "Sum of three values: "
         << calculateSum(15, 25, 35) << endl;

    cout << "Product: "
         << calculateProduct(3.5, 2.0) << endl;

    return 0;
}