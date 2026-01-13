/*
Elias Robles
CSC-134
M1LAB Apple Sales
*/

#include <iostream>
using namespace std;

int main(){
    //Store owner name
    string name = "Jane Smith";
    cout << "Wellcome to " << name << "'s apple farm." << endl;
    //Variable
    int apples = 100;
    //Price
    double pricePerApple = 0.25;

    cout << "We have " << apples << " apples for sale." << endl;
    cout << "The price is $" << pricePerApple << " per apple." << endl;

    //Calculating total price
    double totalPrice = (double) apples * pricePerApple;
    //Display total
    cout << "The total price is $" << totalPrice << "." << endl;


return 0;

}