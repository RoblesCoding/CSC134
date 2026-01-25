/*
ELias Robles
CSC-134
M2HW - Gold
This program will answer Question 2
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    //Set function for decimal places
    std::cout << std::fixed;
    std::cout << std::setprecision(2);

    //Fixed variables
    double COST_PER_CUBIC_FOOT = 0.30;
    double CHARGE_PER_CUBIC_FOOT = 0.52;
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
    cout << "The volume of the crate is " << volume << " sq ft." << endl;
    cout << "The cost of the crate is $" << cost << "." << endl;
    cout << "The charge of the crate is $" << charge << "." << endl;
    cout << "The profit off the crate is $" << profit << "." << endl;

return 0;
}
