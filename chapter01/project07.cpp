/*
Name: Kara Cooper;
Date: 07/13/2026;
Description: 
*/

#include <iostream>
using namespace std;

int main () {
    const int RUNNING_6_MPH = 10;
    const int BASKETBALL_8 = 8;
    const int SLEEPING = 1;
    double weight;
    double time;
    int activity;
    double caloriesBurned;
    
    cout << "Enter your weight in pounds.\n";
    cin >> weight;

    cout << "Enter the number of METS for the activity given that running at 6 miles per an hour is " << RUNNING_6_MPH << " METS," 
        << " and basketball is " << BASKETBALL_8 << ", and sleeping is " << SLEEPING << ". \n";
    
    cin >> activity;

    cout << "Enter time spent in minutes.\n";
    cin >> time; 

    caloriesBurned = 0.0175 * 1 * (weight/2.2) * time * activity;

    cout << "The calories burned is " << caloriesBurned << ".\n";

    return 0;




}