/*
Name: Kara Cooper
Date: 06/12/2026
Description: This program reads the weight of a package of breakfast cereal and
outputs the weight in  metric tons as well as the number of boxes needed to yield
ond metric ton of cereal.
*/

#include <iostream>

using namespace std;
int main()
{
    double METRIC_TON = 35273.92;
    int numberOfBoxes;
    double weightInOunces;
    double weightInMetricTons;

    cout << "How much does one box of breakfast cereal weigh in ounces?" << endl;
    cin >> weightInOunces;

    // calculating weight in metric tons
    weightInMetricTons = weightInOunces/METRIC_TON;

    // calculating number of boxes

    numberOfBoxes = METRIC_TON/weightInOunces;

    cout << "The weight of one box in MetricTons is " << weightInMetricTons << ". The number of boxes of breakfast cereal that would weight a metric ton is " 
    << numberOfBoxes << endl;

    return 0;


}