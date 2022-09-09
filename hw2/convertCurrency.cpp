// CSCI 1300 Fall 2022
// Author: Navan Chauhan
// Recitation: 307 – TA name
// Homework 2 - Problem 5

#include<iostream>

using namespace std;

int main() {
    int gems = 0, gold = 0, bolts = 0;
    cout << "Enter the number of Bolts:\n";
    cin >> bolts;
    gold = bolts/23;
    bolts = bolts % 23;
    gems = gold / 13;
    gold = gold % 13;
    cout << gems << " Gem(s) " << gold << " GoldCoin(s) " << bolts << " Bolt(s)";
    return 0;
}