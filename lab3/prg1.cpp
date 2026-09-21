#include <iostream>
using namespace std;

class Clock
{
    int hours, minutes, seconds;

public:
    void setTime(int h = 0, int m = 0, int s = 0);
    void displayTime();
};

void Clock::setTime(int h, int m, int s)
{
    hours = h;
    minutes = m;
    seconds = s;
}

void Clock::displayTime()
{
    cout << hours << ":" << minutes << ":" << seconds << endl;
}

int main()
{
    Clock clock1, clock2;

    int h, m, s;

    cout << "Enter first clock time: ";
    cin >> h >> m >> s;
    clock1.setTime(h, m, s);

    cout << "Enter second clock time: ";
    cin >> h >> m >> s;
    clock2.setTime(h, m, s);

    cout << "First Clock: ";
    clock1.displayTime();

    cout << "Second Clock: ";
    clock2.displayTime();

    return 0;
}