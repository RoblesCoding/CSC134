/*
ELias Robles
CSC-134
M2HW - Gold
This program will answer Question 3
*/

#include <iostream>
using namespace std;

int main(){
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

    //
    cout << "Pizza Time!! Lets do the math behind this party." << endl;
    cout << "Price per pizza??" << endl;
    cin >> pricePizza;
    cout << "Amount of pizzas?" << endl;
    cin >> amountOfPizza;
    cout << "How much visitors are arriving" << endl;
    cin >> visitors;

    //Calculations
    totalPizzaPrice = amountOfPizza * (pricePizza + (taxPercentage * pricePizza));
    leftovers = (Slices_Per_Pizza * amountOfPizza) + (visitors * Pizza_Slices_Per_Person);


    cout << "The total cost of the pizza is " << totalPizzaPrice << endl;
    cout << "The total amount of leftover pizza slices is " << leftovers << endl;

return 0;
}