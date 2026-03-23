/*
Elias Robles
M5HW - Gold
This will answer all six (6) questions
*/

#include <iostream>
using namespace std;

void main_menu();

int main() {
    cout << "Generating main menu." << endl;
    main_menu();
    return 0;
}

void programOne();
void programTwo();
void programThree();
void programFour();
void programFive();

void main_menu() {
    bool validInput = false;
    int choice;
    //Promt for specific program
    cout << "Welcome to M5HW menu. Please select a program to run by inputing numbers 1-6." << endl;
    cout << "Program Menu:" << endl;
    cout << "Program 1: Rain Average" << endl;
    cout << "Program 2: Hyperrectangle Volume calculator" << endl;
    cout << "Program 3: Roman Numeral Generator" << endl;
    cout << "Program 4: Geometry Calculator" << endl;
    cout << "Program 5: Distance a Vehicle Travels" << endl;
    cout << "Program 6: [Quit Main Menu]" << endl;

    while(!validInput) {
        if (choice == 1) {
            programOne();
            validInput = true;
        }
        else if (choice == 2) {
            programTwo();
            validInput = true;
        }
        else if (choice == 3) {
            programThree();
            validInput = true;
        }
        else if (choice == 4) {
            programFour();
            validInput = true
        }
        else if (choice == 5) {
            programFive();
            validInput = true
        }
        else if (choice == 6) {
            return;
        }
        else {
            cout << "Invalid input, please enter a number 1-4." << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }
    }
}

void programOne() {
    //Variables
    string month1;
    string month2;
    string month3;
    double monthRain1;
    double monthRain2;
    double monthRain3;
    cout << "Welcome to average rain calculator"
    cout <<
}