#include <iostream>
using namespace std;

void increaseIncome(double *income)
{
    *income = *income + (*income * 0.10);
}

int main()
{
    double income = 50000;

    increaseIncome(&income);

    cout << "Revised Income: " << income << endl;

    return 0;
}