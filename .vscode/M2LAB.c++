/*
Elias Robles
CSC-134
M2LAB 
This program is to calculate the volume of a crate
It will also calculate the cost to create, and the charge on the customer
*/

#include <iostream>
using namespace std;

int man(){
    //Fixed variables
    double COST_PER_CUBIC_FOOT = 0.23;
    double CHARGE_PER_CUBIC_FOOT = 0.5;
    //Variables
    double length;
    double width;
    double height;
    double volume;
    double cost;
    double charge;
    double profit;

    //Display input for dimensions
    cout << "Welcome to 'Create a Crate' calculator. Please input the dimenions." << endl;
    cout << "Input length in feet." << endl;
    cin >> length;
    cout << "Input width in feet." << endl;
    cin >> width;
    cout << "Input height in feet." << endl;
    cin >> height;

    //Perform calculations
        volume = length * width * height;
        cost = COST_PER_CUBIC_FOOT * volume;
        charge = CHARGE_PER_CUBIC_FOOT * volume;
        profit = charge - cost;

    //Display calculations to customer
    cout << "The volume of the crate is " << volume << "sq ft." << endl;
    cout << "The cost of the crate is $" << cost << "." << endl;
    cout << "The charge of the crate is $" << charge << "." << endl;
    cout << "The profit off the crate is $" << profit << "." << endl;

return 0;
}
