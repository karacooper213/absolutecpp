/*
Name: Kara Cooper
Date: 07/16/2026
Description: calculates how many candy bars and gumballs i can get.
*/

#include <iostream>
using namespace std;

int main(){
    int numOfCoupons;
    int candyBars;
    int gumBalls;
    const int PRICE_OF_CANDYBAR = 10;
    const int PRICE_OF_GUMBALL = 3;


    cout << "How many coupons do you have?\n";
    cin >> numOfCoupons;

    candyBars = numOfCoupons / PRICE_OF_CANDYBAR;
    gumBalls = (numOfCoupons % PRICE_OF_CANDYBAR)/PRICE_OF_GUMBALL;

    cout << "Candy Bars: " << candyBars << " Gum Balls: " << gumBalls << endl;






return 0;

}