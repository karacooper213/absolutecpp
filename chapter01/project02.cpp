/*
Name: Kara Cooper
Date: 06/12/2026
Description: Determines how much diet soda it is possible to drink without dying
*/

#include <iostream>

using namespace std;

int main()
{
    const double ARTIFICIAL_SWEETENER_CONTENT = 0.001;
    double amountToKillMouse;
    double weightOfMouse;
    double weightOfDieter;
    int deadlyDietSoda;

    cout << "Please enter the amount of artificial sweetener in ounces that can kill a mouse. \n";
    cin >> amountToKillMouse;
    cout << "Please enter the weight of the mouse in pounds. \n";
    cin >> weightOfMouse;
    cout << "Please enter the weight the dieter will be when they stop dieting in pounds. \n";
    cin >> weightOfDieter;

    // calculate the amount of diet soda that can kill
    deadlyDietSoda = (((amountToKillMouse/weightOfMouse) * weightOfDieter)/ARTIFICIAL_SWEETENER_CONTENT)/12;

    cout << "The number of cans of diet soda your friend can drink is " << deadlyDietSoda << endl;

    return 0;

}