#include <iostream>
using namespace std;

class Clock
{
    int hours, minutes, seconds;

public:
    void setTime(int h, int m, int s)
    {
        hours = h;
        minutes = m;
        seconds = s;
    }

    void displayTime()
    {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }
};

int main()
{
    Clock clock1, clock2;

    clock1.setTime(10, 30, 45);
    clock2.setTime(5, 20, 30);

    cout << "First Clock Time: ";
    clock1.displayTime();

    cout << "Second Clock Time: ";
    clock2.displayTime();

    return 0;
}