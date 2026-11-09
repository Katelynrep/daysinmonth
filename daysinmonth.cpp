
#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int main()
{
    int month;
    int year;
    int days;
    bool LeapYear;
//user input
    cout << "Enter a month number (1-12): ";
    cin >> month;

    cout << "Enter a year: ";
    cin >> year;

    // validate the month
    if (month < 1 || month > 12)
    {
        cout << "Invalid month." << endl;
    }
    else
    {
        // determine whether the year is a leap year
        if (year % 400 == 0)
        {
            LeapYear = true;
        }
        else if (year % 100 == 0)
        {
            LeapYear = false;
        }
        else if (year % 4 == 0)
        {
            LeapYear = true;
        }
        else
        {
            LeapYear = false;
        }


        if (month == 2)
        {
            if (LeapYear)
            {
                days = 29;
            }
            else
            {
                days = 28;
            }
        }
        else if (month == 4 || month == 6 ||
                 month == 9 || month == 11)
        {
            days = 30;
        }
        else
        {
            days = 31;
        }

        cout << "Number of days: " << days << endl;
    }

    return 0;
}
