#include <bits/stdc++.h>
using namespace std;

class Complex
{
    float real, img;

public:
    void input()
    {
        cout << "Enter real number: ";
        cin >> real;

        cout << "Enter imaginary number: ";
        cin >> img;
    }

    Complex add(Complex &num1, Complex &num2)
    {
        Complex sum;

        sum.real = num1.real + num2.real;
        sum.img = num1.img + num2.img;

        return sum;
    }

    Complex add(Complex &num)
    {
        Complex sum;

        sum.real = real + num.real;
        sum.img = img + num.img;

        return sum;
    }

    void display()
    {
        cout << "Result: " << real;

        if (img >= 0)
        {
            cout << "+" << img << "i" << endl;
        }
        else
        {
            cout << img << "i" << endl;
        }
    }
};

int main()
{

    Complex num1, num2, sum1, sum2;

    num1.input();
    num2.input();

    sum1 = sum1.add(num1, num2);
    sum2 = num1.add(num2);

    cout << "\nAddition using two arguments:\n";
    sum1.display();

    cout << "Addition using one argument:\n";
    sum2.display();

    return 0;
}