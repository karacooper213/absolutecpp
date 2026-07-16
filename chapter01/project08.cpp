/*
Name: Kara Cooper
Date: 07/15/2026
Description: This program uses the babylonian algorithm to compute the square root of a positive number.
*/

#include <iostream>
using namespace std;

int main(){
    double n;
    double guess;
    double r;

    cout << "Please enter a positive number.\n";
    cin >> n;

    guess = n/2;
    for (int i = 0; i < 5; i++){
         r = n/guess;
         guess = (guess + r)/2;
    }
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << guess << endl;

    return 0;



}
