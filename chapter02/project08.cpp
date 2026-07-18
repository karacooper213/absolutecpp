/*
Name: Kara Cooper
Date: 07/18/2026
Description: Find the temperature as an integer that is the same in both Celsius and Fahrenheit
*/

#include <iostream>
using namespace std;

int main() {
double tempInCelsius = 100;
double tempInFahrenheight = ((9.0 / 5.0) * tempInCelsius + 32);

while (tempInCelsius != tempInFahrenheight){
    tempInCelsius--;
    tempInFahrenheight = ((9.0 / 5.0) * tempInCelsius + 32);

}
  cout << "The temperature is " << tempInCelsius << endl;
  return 0;
}