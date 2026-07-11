/*
Name: Kara Cooper
Date: 07/11/2026
Description: Calculates worker's gross pay, the withholding amount, and the net take-home pay for the week.
*/

#include <iostream>
using namespace std;

int main() {
     double numberOfHours;
     double numberOfDependents;
     double workersGrossPay;
     double withholdingAmount;
     double takeHomePay;

     cout << "How many hours did you work per week?\n";
     cin >> numberOfHours;
     cout << "How many dependants do you have?\n";
     cin >> numberOfDependents;
     
     if (numberOfHours > 40){
        workersGrossPay = 40 * 16.78 + (numberOfHours - 40) * (16.78 * 1.5);
     } else {
        workersGrossPay = numberOfHours * 16.78;
     }

     if(numberOfDependents >= 3 ) {

     withholdingAmount = workersGrossPay * .06 + workersGrossPay * .14 + workersGrossPay * .05  + 10 + 35;

     } else {
        withholdingAmount = workersGrossPay * .06 + workersGrossPay * .14 + workersGrossPay * .05  + 10;
     }

     takeHomePay = workersGrossPay - withholdingAmount;

     cout << "The worker's gross pay is " << workersGrossPay << " , the withholdingAmount is " <<  withholdingAmount << " , and the takeHomePay is " << takeHomePay << ". \n";

     return 0;
    }