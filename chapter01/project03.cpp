/*
Name: Kara Cooper
Date: 06/12/2026
Description: Determines the amount of retroactive pay due an employee
*/

#include <iostream>

using namespace std;
int main()
{
    double previousAnnualSalary;
    const double INCREASE = 1.076;
    double payDue;
    double newAnnualSalary;
    double newMonthlySalary;

    cout << "Please enter the employee's previous annual Salary.\n";
    cin >> previousAnnualSalary;

    // Calculates the payDue
    payDue = (previousAnnualSalary/2) * INCREASE;
    newAnnualSalary = previousAnnualSalary * INCREASE;
    newMonthlySalary = newAnnualSalary/12;

    cout << "The pay Due is " << payDue << ". The new salary is " << newAnnualSalary << " dollars a year. The new monthly salary is " << newMonthlySalary << ".\n";

    return 0;
}