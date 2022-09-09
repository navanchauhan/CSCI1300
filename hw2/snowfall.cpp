// CSCI 1300 Fall 2022
// Author: Navan Chauhan
// Recitation: 307 – TA name
// Homework 2 - Problem 4

#include<iostream>

using namespace std;

int main() {
    int num_days, breck, vail, copper;
    
    cout << "How many days in the future would you like a prediction for?\n";
    cin >> num_days;
    // Takes initial snow, adds the expected snowfall and subtracts the expected melted snow
    breck = 25+(10*num_days)-(5*num_days);
    vail  = 28+(14*num_days)-(2*num_days);
    copper = 40+(5*num_days)-(3*num_days);
    cout << "Breckenridge will have " << breck << " inches, Vail will have " << vail << " inches, and Copper Mountain will have " << copper << " inches.";
    return 0;
}
