/*
 Name: Kara Cooper
 Date: 7/13/2026
 Description: This program calculates the number of chocolate bar.
*/

#include <iostream>
using namespace std;

int main(){
    double n;
    int chocolateBarsEaten = 0;
    int numberOfCoupons = 0;

    cout << "How much money do you have?\n";
    cin >> n;

    while (n > 0) {
        n--;
        chocolateBarsEaten++;
        numberOfCoupons++;

        if (numberOfCoupons % 7 == 0 ){
            numberOfCoupons -= 7;
            chocolateBarsEaten++;
            numberOfCoupons++;
        }
    }

    cout << chocolateBarsEaten << endl;
    return 0;
}
