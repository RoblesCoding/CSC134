/*
Elias Robles
CSC-134
M2T2 Resturant Calculator
This program will calculate the bill before and after tax.
*/

#include <iostream>
using namespace std;

int main(){
    //Variables
    int meals;
    double pricePerMeal = 5.99;
    double priceBeforeTax;
    double tax = 0.08;
    double amountTax;
    double priceAfterTax;

    //Promt Calculator
    cout << "Welcome to the restaurant checkout. How many meals did you have?" << endl;
    cin >> meals;

    //Perform calculations
    priceBeforeTax = meals * pricePerMeal;
    amountTax = priceBeforeTax * tax;
    priceAfterTax = priceBeforeTax + amountTax;

    //Display values and display message
    cout << "" << endl;
    cout << "Thank you, here is your total." << endl;
    cout << "Price: $" << priceBeforeTax << endl;
    cout << "Tax: $" << amountTax << endl;
    cout << "Total: $" << priceAfterTax << endl;
    cout << "" << endl;
    cout << "Eat with us again!" << endl;

return 0;
}