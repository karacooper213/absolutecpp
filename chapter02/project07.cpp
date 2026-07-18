/*
Name: Kara Cooper
Date: 07/18/2026
Description: Calculates the total grade for N classroom exercises as a percentage.
*/

#include <iostream>
using namespace std;

int main() {

    int numOfExercises;
    double sum;
    double sumOfTotalPoints;
    

    cout << "Enter the total number of exercises.\n";
    cin >> numOfExercises;

    for (int i = 0; i < numOfExercises; i++){
        double points;
        double totalPoints;
        cout << "Score received for exercise " << (i + 1) << ": \n";
        cin >> points;
        cout << "Total points for exercise " << i + 1 << ": \n";
        cin >> totalPoints;
        sum += points;
        sumOfTotalPoints += totalPoints;
    }

    cout << "Your total is " << sum << " out of " << sumOfTotalPoints << " or " << (sum/sumOfTotalPoints * 100) << ".\n";

    return 0;






}