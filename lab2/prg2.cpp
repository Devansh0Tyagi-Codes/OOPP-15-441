#include <iostream>
using namespace std;

int main()
{
    double income = 50000;

    double *revisedIncome = &income;

    *revisedIncome = *revisedIncome + (*revisedIncome * 0.10);

    cout << "Revised Income: " << income << endl;

    return 0;
}