/*
Name: Kara Cooper
Date: 07/18/2026
Description: Calculates whether a sphere will sink or float in water.
*/

#include <iostream>
using namespace std;

int main() {

double buoyantForce;
double volume;
const double SPECIFIC_WEIGHT = 62.4;
double weight;
double radius;


cout << "Please input the weight in pounds.\n";
cin >> weight;
cout << "Please input the radius in feet.\n";
cin >> radius;

volume = (4/3) * 3.14 * radius * radius * radius;
buoyantForce = volume * SPECIFIC_WEIGHT;

if (buoyantForce >= weight) {
    cout << "It will float in water.\n";
} else {
    cout << "It will sink.\n";
}
return 0;
}

