/*
Name: Kara Cooper
Date: 07/18/2026
Description: Read in the text from file and outputs each work to the console
*/

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
    string text;
    fstream inputStream;

    inputStream.open("chapter2project10.txt");

    while (inputStream >> text){

    if (text == "hate" ) {
        text = "love";
    }

    cout << text << endl;
    }
    
    inputStream.close();

    return 0;

}