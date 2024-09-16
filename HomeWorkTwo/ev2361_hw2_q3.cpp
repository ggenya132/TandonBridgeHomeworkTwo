#include <iostream>
#include <string>
#include <tuple>
using namespace std;

int promptDays(string name)
{
    int days;
    cout << "Please enter the number of days " << name << " has worked:" << endl;
    cin >> days;
    cout << endl;
    return days;
}
int promptHours(string name)
{
    int hours;
    cout << "Please enter the number of hours " << name << " has worked:" << endl;
    cin >> hours;
    cout << endl;
    return hours;
}
int promptMinutes(string name)
{
    int minutes;
    cout << "Please enter the number of minutes " << name << " has worked:" << endl;
    cin >> minutes;
    cout << endl;
    return minutes;
}
tuple<int, int, int> prompt(string name)
{
    int days = promptDays(name);
    int hours = promptHours(name);
    int minutes = promptMinutes(name);
    return make_tuple(days, hours, minutes);
}
int main()
{
    tuple<int, int, int> timeJohnWorked = prompt("John");
    tuple<int, int, int> timeBillWorked = prompt("Bill");

    int numberOfDaysTotal = get<0>(timeJohnWorked) + get<0>(timeBillWorked);
    int numberOfHoursWorked = get<1>(timeJohnWorked) + get<1>(timeBillWorked);
    int numberOfMinutesWorked = get<2>(timeJohnWorked) + get<2>(timeBillWorked);
    numberOfDaysTotal += numberOfHoursWorked / 24;
    numberOfHoursWorked -= 24 * (numberOfHoursWorked / 24);
    numberOfHoursWorked += numberOfMinutesWorked / 60;
    numberOfMinutesWorked -= 60 * (numberOfMinutesWorked / 60);

    cout << "The total time both of them worked together is: " << numberOfDaysTotal << " day(s), " << numberOfHoursWorked << " hour(s) and " << numberOfMinutesWorked << " minutes." << endl;
}