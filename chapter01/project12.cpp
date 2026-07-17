/*
Name: Kara Cooper
Date: 07/17/2026
Description: This program estimate your ideal body weight
*/

#include <iostream>
using namespace std;

int main(){
double personsHeight;
const double FIRST_FIVE_FEET = 110;
const double AMMOUNT_PER_INCH = 5;
double additionalInches;
double idealWeight;

cout << "Please enter your height in inches.\n";
cin >> personsHeight;

additionalInches = personsHeight - 60;
idealWeight = FIRST_FIVE_FEET + AMMOUNT_PER_INCH * additionalInches;

cout << "The ideal weight is " << idealWeight << ".\n";

return 0;

}