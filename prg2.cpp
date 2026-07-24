#include <iostream>
using namespace std;

void swap_by_value(int a, int b)
{
    int t = a;
    a = b;
    b = t;
    cout << "after swap: " << a << " " << b << endl;
}

void swap_by_reference(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
    cout << "after swap: " << a << " " << b << endl;
}
void swap_by_pointer(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
    cout << "after swap: " << *a << " " << *b << endl;
}

void showdata(int a, int b)
{
    cout << "original value: " << a << " " << b << endl;
}

int main()
{
    int a, b;
    cin >> a >> b;
    swap_by_value(a, b);
    showdata(a, b);
    swap_by_reference(a, b);
    showdata(a, b);
    swap_by_pointer(&a, &b);
    showdata(a, b);
    return 0;
}