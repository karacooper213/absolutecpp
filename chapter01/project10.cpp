/*
Name: Kara Cooper
Date: 07/16/2026
Description: Calculate how far an object would drop if in freefall for a length of time

*/

#include <iostream>
using namespace std;

int main() {
    double time;
    const double ACCELERATION = 32;
    double distance;

    cout << "Enter the time in seconds.\n";
    cin >> time;

    distance = (1.0/2.0) * ACCELERATION * (time * time);

    cout << distance << endl;

    return 0;
}