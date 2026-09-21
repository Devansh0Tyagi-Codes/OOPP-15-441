#include <iostream>
using namespace std;

int main()
{
    double income = 50000;

    double &updatedIncome = income;

    updatedIncome = updatedIncome + (updatedIncome * 0.10);

    cout << "Updated Income: " << income << endl;

    return 0;
}