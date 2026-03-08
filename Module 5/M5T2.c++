/*
Elias Robles
CSC-134
M5T2 - More Practice with Functions
List numbers 1 to 10 with the sqaures of those numbers
*/

#include <iostream>
using namespace std;

int square(int num);
void printAnswerLine(int numsquared);

int main() {
    //Variables
    int num;
    int numsquared;
    bool ValidInput = false;

    cout << "Welcome to numbers squared calculator." << endl;
    cout << "Please enter in a number from 1 to 10." << endl;

    while (!ValidInput){
        cin >> num;        
        if (num >= 1 && num <= 10){
            numsquared = square(num);
            printAnswerLine(numsquared);
            ValidInput = true;
        }
        else {
            cout << "Please reenter a number from 1 to 10." << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }
    }
return 0;
}

int square(int num) {
    return num * num;
}

void printAnswerLine(int numsquared) {
    cout << "The number squared is: " << numsquared << endl;
}