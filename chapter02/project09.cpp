/*
Name: Kara Cooper
Date: 07/18/2026
Description: Calculate square root of a psitive number using babylonian algorithm
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double n;
    double guess;
    double r;
    double previousGuess;

    cout << "Please enter a positive number.\n";
    cin >> n;

    guess = n/2.0;
    do {
         previousGuess = guess;
         r = n/guess;
         guess = (guess + r)/2.0;
    } while (abs((guess - previousGuess)/previousGuess) >= .01);
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << guess << endl;

    return 0;



}