// CSCI 1300 Fall 2022
// Author: Navan Chauhan
// Recitation: 307 – TA name
// Homework 2 - Problem 3

#include<iostream>
#include<iomanip>

using namespace std;

int main() {
    double side_len = 0;
    double height = 0;
    double volume = 0;
    // User input
    cout << "What is the side length of the base of the carton in inches?\n";
    cin >> side_len;
    cout << "What is the height of the carton in inches?\n";
    cin >> height;
    volume = (side_len*side_len)*height*0.55; // Calculate and convert to ounces
    cout << "The carton has a volume of " << fixed << setprecision(1) << volume<<" ounces.";
    return 0;
}