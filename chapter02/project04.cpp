/*
Name: Kara Cooper
Date: 07/17/2026
Description: Finds and prints all of the prime numbers between 3 and 100.
*/

#include <iostream>
using namespace std;

int main() {

 
   
    
    for(int i = 3; i <= 100; i++){

        bool prime = true;
        for (int j = 2; j <= i - 1; j++) {
            if (i % j == 0) {
                prime = false;
            }
        
        }
        if (prime == true) {
            cout << i << " \n";
        }
    

    }


return 0;


}