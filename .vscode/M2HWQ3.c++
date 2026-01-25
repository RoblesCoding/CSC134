/*
ELias Robles
CSC-134
M2HW - Gold
This program will answer Question 3
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    //Set function for decimal places
    std::cout << std::fixed;
    std::cout << std::setprecision(2);

    //Fixed Variables
    int Pizza_Slices_Per_Person = 3;
    int Slices_Per_Pizza = 8;
    double taxPercentage = 0.07;

    //Variables
    int amountOfPizza;
    int visitors;
    int leftovers;
    double pricePizza;
    double totalPizzaPrice;

    //Display calulator 
    //Prompt inputs
    cout << "Pizza Time!! Lets do the math behind this party." << endl;
    cout << "Price per pizza?" << endl;
    cin >> pricePizza;
    cout << "Amount of pizzas?" << endl;
    cin >> amountOfPizza;
    cout << "How much visitors are arriving" << endl;
    cin >> visitors;

    //Calculations
    totalPizzaPrice = amountOfPizza * (pricePizza + (taxPercentage * pricePizza));
    leftovers = (Slices_Per_Pizza * amountOfPizza) - (visitors * Pizza_Slices_Per_Person);

    //Display results
    cout << "The total cost of the pizza is $" << totalPizzaPrice << "." << endl;
    cout << "The total amount of leftover pizza slices is " << leftovers << "." << endl;

return 0;
}