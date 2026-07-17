/*
Name: Kara Cooper
Date: 7/13/2026
Description: This program finds solutions to the following cryptarithmetic puzzles.
*/


#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    int O;
    int G;
    int D;

   for (int t = 0; t < 10; t++) {
    for (int o = 0; o < 10; o++) {
        for (int g = 1; g < 10; g++) {
            for (int d = 0; d < 10; d ++) {
                T = t;
                O = o;
                G = g;
                D = d;
                if ((t != o) && (o != g) && (g != d) && (t != d) && (o != d)){
                    int TOO = 100 * T + O * 10 + O;
                    int GOOD = 1000 * G + 100 * O + 10 * O + D;
                    if (TOO * 4 == GOOD) {
                        cout << "T: " << T << " O: " << O << " G: " << G << " D: " << D << endl;
                       
                    }
                } 
            }
        }
    }
   }

return 0;
}

