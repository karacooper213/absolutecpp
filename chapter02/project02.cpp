/*
Name: Kara Cooper;
Date: 07/13/2026
Description: This program calculates how many months it will take to pay off a loan. 
*/


#include <iostream>
using namespace std;

int main(){
    const double STARTING_COST = 1000;
    const double INTEREST_RATE = 0.015;
    const double MONTHLY_PAYMENTS = 50;
    double monthlyAmountOfInterest;
    double monthsTaken = 0;
    double remainingCost = STARTING_COST;

    while (remainingCost > 0) {
        monthsTaken ++;
        monthlyAmountOfInterest = remainingCost * INTEREST_RATE;
        remainingCost = remainingCost - (MONTHLY_PAYMENTS - monthlyAmountOfInterest);
    }

    cout << "The number of months to pay off the debt is " << monthsTaken << endl;
    return 0;

}
