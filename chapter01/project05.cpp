/*
Name: Kara Cooper
Date: 07/11/2026
Description: This program calculates the face value required in order for the consumer to receive the amount needed 
and calculating the monthly payment.
*/

#include <iostream>
using namespace std;

int main() {

    int maximumRoomCapacity;
    int numberOfAttendees;
    int numberToExclude;
    int numberCanInvite;

    cout << "What is the maximum room capacity.\n";
    cin >> maximumRoomCapacity;
    cout << "How many people are attending the meeting? \n";
    cin >> numberOfAttendees;



    if (numberOfAttendees > maximumRoomCapacity){
        numberToExclude = numberOfAttendees - maximumRoomCapacity;
        cout << "The meeting cannot be held as planned due to fire regulations you must exclude " << numberToExclude << " people. \n";
    } else {
        numberCanInvite = maximumRoomCapacity - numberOfAttendees;
        cout << "The meeting can legally be held. You may invite " << numberCanInvite << " more people. \n";
    }
    

    return 0;
}