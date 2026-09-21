#include <bits/stdc++.h>

using namespace std;

void display(int a, int b)
{
    cout << "a : " << a << ", b : " << b << endl;
}

void exchangeByValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;

    cout << "After Exchange : " << endl;
    display(a, b);
}

void exchangeByPointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;

    cout << "After Exchange : " << endl;
    display(*a, *b);
}

void exchangeByReference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;

    cout << "After Exchange : " << endl;
    display(a, b);
}

int main()
{

    int a, b;

    cout << "Enter two integers : ";
    cin >> a >> b;

    cout << "\nExchange using Pass by Value" << endl;
    cout << "Before Exchange : " << endl;
    display(a, b);
    exchangeByValue(a, b);

    cout << "\nExchange using Pointers" << endl;
    cout << "Before Exchange : " << endl;
    display(a, b);
    exchangeByPointer(&a, &b);

    cout << "\nExchange using References" << endl;
    cout << "Before Exchange : " << endl;
    display(a, b);
    exchangeByReference(a, b);

    return 0;
}