#include <iostream>
#include <cmath>
using namespace std;

enum Days
{
    mon,
    tue,
    wed,
    thur,
    fri,
    sat,
    sun
};

class Day
{
protected:
    Days currentDay;

public:
    void setCurrentDay(Days d)
    {
        currentDay = d;
    }
    void sendNotification()
    {
        if (currentDay == Days::sun)
        {
            cout << "Notification sent";
        }
        else
        {
            cout << "Today is " << currentDay << " unable to send" << endl;
        }
    }
};

class Weekend : public Day
{
};

int main()
{
    Weekend day;
    day.setCurrentDay(Days::tue);
    day.sendNotification();
}