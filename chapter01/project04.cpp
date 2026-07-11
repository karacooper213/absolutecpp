/*
Name: Kara Cooper
Date: 07/11/2026
Description: This program calculates the face value required in order for the consumer to receive the amount needed 
and calculating the monthly payment.
*/

#include <iostream>

using namespace std;
int main()
{
    double needsToReceive;
    double interestRate;
    double duration;

    double faceValue;
    double monthlyPayment;

    cout << "Please enter the amount the consumer needs to receive.\n";
    cin >> needsToReceive;

    cout << "Please enter the interest rate as a decimal. For example, 15% would be .15.\n";
    cin >> interestRate;

    cout << "Please enter the duration in years.\n";
    cin >> duration;

    faceValue = needsToReceive/(1-interestRate*duration);

    monthlyPayment = faceValue/(duration*12);

    cout << "The face value is " << faceValue << ". " << "The monthly payment is " << monthlyPayment << ". \n";

    return 0;
}