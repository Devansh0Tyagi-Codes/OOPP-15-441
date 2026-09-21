#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int studentId;
    int rollNumber;
    string studentName;

    void showDetails()
    {
        cout << "Student ID: " << studentId << endl;
        cout << "Student Name: " << studentName << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }
};

int main()
{
    Student obj;

    cout << "Enter student ID, roll number and name: ";
    cin >> obj.studentId >> obj.rollNumber >> obj.studentName;

    obj.showDetails();

    return 0;
}