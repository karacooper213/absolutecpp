/*
Name: Kara Cooper
Date: 07/18/2026
Description: Estimate ideal body weight from list 
*/

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){
double personsHeight;
const double FIRST_FIVE_FEET = 110;
const double AMMOUNT_PER_INCH = 5;
double additionalInches;
double idealWeight;

fstream inputStream;
string firstName;
string lastName;
int feet;
int inches;

inputStream.open("Chapter2Project11.txt");

while (inputStream >> firstName >> lastName >> feet >> inches) {
    
    personsHeight = 12 * feet + inches;
    additionalInches = personsHeight - 60;
    idealWeight = FIRST_FIVE_FEET + AMMOUNT_PER_INCH * additionalInches;

    cout << "The ideal weight is " << idealWeight << ".\n";
}
return 0;

}