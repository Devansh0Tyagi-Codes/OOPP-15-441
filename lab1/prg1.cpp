#include <iostream>

using namespace std;

int main()
{
    string studentA, studentB;
    int idA, idB;

    cout << "Enter the first student's name: ";
    cin >> studentA;

    cout << "Enter the first student's ID: ";
    cin >> idA;

    cout << "Enter the second student's name: ";
    cin >> studentB;

    cout << "Enter the second student's ID: ";
    cin >> idB;

    cout << "\nStudent Details:\n";

    cout << "Student 1 - Name: " << studentA
         << ", ID: " << idA << endl;

    cout << "Student 2 - Name: " << studentB
         << ", ID: " << idB << endl;

    return 0;
}