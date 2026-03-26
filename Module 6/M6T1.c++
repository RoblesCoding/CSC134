/*
Elias Robles
CSC-134
M6T1 - This program will use loops and arrays for cars
*/

#include <iostream>
#include <string>
using namespace std;

void main_program();

int main() {
    cout << "Loading Program..." << endl;
    main_program();
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
    int cars_monday;
    int cars_tuesday;
    int cars_wednesday;
    int cars_thursday;
    int cars_friday;
    string dayWeek;
    double totalCars = 0;
    double averageCars = 0;

    //While statement up to five days
    while (count <= maxWeekdays) {

        //Switch statement for the day in the Weekday
        switch(count) {
            case 1:
            dayWeek = "Monday";
            cars_monday = cars;
            break;
            case 2:
            dayWeek = "Tuesday";
            cars_tuesday = cars;
            break;
            case 3:
            dayWeek = "Wednesday";
            cars_wednesday = cars;
            break;
            case 4:
            dayWeek = "Thursday";
            cars_thursday = cars;
            break;
            case 5:
            dayWeek = "Friday";
            cars_friday = cars;
            break;
            default:
            cout << "Past the weekday." << endl;
            break;
        }

        //Program for each day of the week
        cout << "How many cars went through on " << dayWeek << "." << endl;
        cin >> cars;

        //Check for positive numbers
        if(cars >= 0) {
            totalCars += cars;
            count++;
        }
        else {
            cout << "Please enter a positive number." << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }
        
                //Switch statement for the Weekday

    }

    //Present results of Program
    //The amount of cars each day
    cout << "The amount of cars on Monday: " << cars_monday << "." << endl;
    cout << "The amount of cars on Tuesday: " << cars_tuesday << "." << endl;
    cout << "The amount of cars on Wednesday: " << cars_wednesday << "." << endl;
    cout << "The amount of cars on Thursday: " << cars_thursday << "." << endl;
    cout << "The amount of cars on Friday: " << cars_friday << "." << endl;
    cout << "'\n'" << endl;
    cout << "The total amount of cars: " << totalCars << "." << endl;
    averageCars = totalCars / 5;
    cout << "The average amount of cars: " << averageCars << "." << endl;
}