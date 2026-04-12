#include <iostream>
#include <ctime>
using namespace std;

int main()

{
    int totalSeconds = time(0);
    int seconds = totalSeconds / 60;
    int currentSeconds = seconds % 60;
    int minutes = seconds / 60;
    int currentMinutes = minutes % 60;
    int hours = minutes / 60;
    int currentHours = hours % 24;

    cout << "current time is " << currentHours << " : " << currentMinutes;
    cout << " : " << currentSeconds << " GMT";
}