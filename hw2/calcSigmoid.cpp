// CSCI 1300 Fall 2022
// Author: Navan Chauhan
// Recitation: 307 – TA name
// Homework 2 - Problem 6

#include<iostream>
#include<cmath>

using namespace std;

int main() {
    double x = 0;
    double sigmoid = 0;
    cout << "Enter a value for x:\n";
    cin >> x;
    sigmoid = 1/(1+(exp(-x)));
    cout << "The sigmoid for x=" << x << " is " << sigmoid;
    return 0;
}