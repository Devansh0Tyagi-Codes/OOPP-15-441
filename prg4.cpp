#include <iostream>
#include <vector>
using namespace std;

int main()
{
int a[]= {10,20,30,40,50};

    cout << "Elements of the collection are: " << endl;

    for (auto num : a)
    {
        cout << num << " ";
    }

    cout << endl;

    return 0;
}