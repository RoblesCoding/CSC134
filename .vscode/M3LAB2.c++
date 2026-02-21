/*
Elias Robles
CSC-134
M3LAB1
This program is for grading a test and assigning letter grades.
*/

#include <iostream>
using namespace std;

void gradeCalculator(int grade);

int main() {
    //Variables
    int grade;
    bool validInput = false;
    //Display Introduction
    while (!validInput) {
        cout << "Welcome to grade calculator. Please input your numerical grade." << endl;
        cin >> grade;
        if (grade >=0 && grade <= 100){
            gradeCalculator(grade);
            validInput = true;
        }
        else {
            cout << "This is not a valid grade. Please input your grade." << endl;
            cin.clear();
        }
    }
return 0;
}

void gradeCalculator(int grade){
    //Compute the grade
    if (grade >= 90 && grade <= 100) {
        cout << "You grade is an A. Aced it!" << endl;
    }
    else if (grade >= 80 && grade <= 90) {
        cout << "Your grade is a B. Good job!" << endl;
    }
    else if (grade >= 70 && grade <= 80) {
        cout << "Your grade is a C. You can do better." << endl;
    }
    else if (grade >= 60 && grade <= 70) {
        cout << "Your grade is a D. You have to study." << endl;
    }
    else {
        cout << "Your grade is a F. Contact the professor for help." << endl;
    }
}