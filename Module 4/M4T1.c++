/*
Elias Robles
CSC-134
M3HW1
This is a program will say hello five times.
*/

#include <iostream>
using namespace std;

int main() {
    //Variables
    int number = 1;
    const int MAX = 5;
    //While statement to 5
    while (number <=5) {
        cout << "Hello!" << endl;
        number++;
    }
    //Variables
    const int MIN_NUMBER = 1;
    const int MAX_NUMBER = 10;
    int num = MIN_NUMBER;
    //Present for the number and number squared
    cout << "Number" << "\t" << "Number Squared" << endl;
    //While statement to 10
    while (num <= MAX_NUMBER) {
        cout << num << "\t" << num * num << endl;
        num++;
    }
return 0;
}