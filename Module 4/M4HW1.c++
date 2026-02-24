/*
Elias Robles
CSC-134
M3HW1
This is a program will answer all questions (gold)
*/

#include <iostream>
using namespace std;

void programCalculator(int nummult);

int main() {
    //Variables    
    int nummult;
    bool validInput;

    //Prompt Input
    cout << "Enter a number from 1-12 that you want the multiplication table to." << endl;
    cin >> nummult;

    while(!validInput) {
        if (nummult > 0 && nummult <= 12) {
            programCalculator(nummult);
            validInput = true;
        }
        else {
            cout << "Invalid input, re-enter a number from 1-12 that you want the multiplication table to." << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            cin >> nummult;
        }
    }
return 0;
}
//Multiplication Table
void programCalculator(int nummult) {
    //Variables
    const int MIN_NUMBER = 1;
    const int MAX_NUMBER = 12;
    int num = MIN_NUMBER;

    cout << "Mutiplication Tables: \n" << endl;
    //While statement to 10
    while (num <= MAX_NUMBER) {
        cout << nummult << " times " << num << " equals " << nummult * num << endl;
        num++;
    }
}