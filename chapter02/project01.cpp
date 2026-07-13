/*
Name: Kara Cooper;
Date: 07/13/2026
Description: This program calculates the price adjusted for inflation
*/

#include <iostream>
using namespace std;

int main(){
    double costOfItem;
    double numberOfYearsUntilPurchase;
    double rateOfInflation;

    cout << "Please enter the cost of the item you want to purchase.\n";
    cin >> costOfItem;
    cout << "Please enter the number of years until you are going to purchase the item. \n";
    cin >> numberOfYearsUntilPurchase;
    cout << "Please enter the inflation rate as a percentage. Such as 5.6 for 5.6 %. \n";
    cin >> rateOfInflation;

    for ( int i = 0; i < numberOfYearsUntilPurchase; i++){
        costOfItem *= rateOfInflation;
        cout << "Year: " << i << " Cost: " << costOfItem << endl;
    }

    return 0;
    
}
