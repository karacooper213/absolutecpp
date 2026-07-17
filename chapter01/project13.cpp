/*
Name: Kara Cooper
Date: 07/17/2026
Description: Calculates the number of caffeineted drinks would be lethal;
*/

#include <iostream>
using namespace std;

int main() {

    const double LETHAL_DOSE = 10000;
    double amountOfCaffeine;
    int lethalNumOfDrinks;
   

    cout << "Enter the amount of caffeine in a drink in mg.\n";
    cin >> amountOfCaffeine;

   

    lethalNumOfDrinks = LETHAL_DOSE/(amountOfCaffeine);

    cout << "The number of drinks you must drink to be lethal is " << lethalNumOfDrinks << ".\n";

    return 0;




}