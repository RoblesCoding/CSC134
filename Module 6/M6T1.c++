/*
Elias Robles
CSC-134
M6T1 - This program will use loops and arrays for cars
*/

#include <iostream>
#include <string>
using namespace std;

void main_menu();

int main() {
    cout << "Loading Program..." << endl;
    main_menu();
    cout << "Thanks for using the program" << endl;
    return 0;
}

//Main program
void main_program() {
    //Promt Program
    cout << "Welcome to the weekday car calculator." << endl;

    //Variables
    const int maxWeekdays = 5;
    int count = 1;
    int cars;
    string dayWeek;
    int totalCars = 0;
    double averageCars = 0;

    //While statement up to five days
    while (count < maxWeekdays) {

        //Program for each day of the week
        cout << "How many cars went through on " << dayWeek << "." << endl;
        cin >> cars;

        //Check for positive numbers
        if(cars >= 0) {
            cars += totalCars;
            count++;
        }
        else {
            cout << "Please enter a positive number." << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }
        
        switch(count) {
            case 1:
            dayWeek = "Monday";
            case 2:
            dayWeek = "Tuesday";
            case 3:
            dayWeek = "Wednesday";
            case 4:
            dayWeek = "Thursday";
            case 5:
            dayWeek = "Friday";
            default:
            cout << "Past the weekday." << endl;
        }
    }

    //Present results of Program
    cout << "The total amount of cars: " << totalCars << "." << endl;
    averageCars = totalCars / 5;
    cout << "The average amount of cars: " << averageCars << "." << endl;
}