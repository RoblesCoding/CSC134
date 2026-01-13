/*
Elias Robles
CSC-134
M1LAB Apple Sales
*/

#include <iostream>
using namespace std;

int main(){
    string name = "Jane Smith";
    cout << "Wellcome to " << name << "'s apple farm.";
    endl;
    int apples = 225;
    double pricePerApple = 0.25;

    cout << "We have " << apples << "apples for sale.";
    endl;
    cout << "The price is $" << pricePerApple << "per apple.";
    endl;

    //Calculating total price
    double totalPrice = (double) apples * pricePerApple;
    cout << "The total price is $" << totalPrice;
    endl;


return 0;

}