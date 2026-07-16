/*
Name: Kara Cooper
Date: 07/16/2026
Description: Converts seconds to hours, minutes and seconds
*/

#include <iostream>
using namespace std;

int main () {

    int enteredSeconds;
    int hours;
    int minutes;
    int seconds;

    cout << "Please enter the number of seconds.. \n";
    cin >> enteredSeconds;

    hours = enteredSeconds/3600;
    minutes = (enteredSeconds % 3600) / 60;
    seconds = enteredSeconds % 60;

    cout << "Hours: " << hours << " Minutes: " << minutes << " Seconds: " << seconds << endl;

    return 0;

}