/*
Elias Robles
CSC-134
M2T1 cin method apple store
*/

#include <iostream>
using namespace std;

int main(){
    //Set variables
    string name;
    double pricePerApple;
    int apples;

    //Show promts and input information
    cout << "Please enter your name." << endl;
    cin >> name;
    cout << "Welcome to " << name << "'s apple farm." << endl;
    cout << "Please insert the price of each apple." << endl;
    cin >> pricePerApple;
    cout << "How many apples do you have?" << endl;
    cin >> apples;

    //Display price and amount of apples
    cout << "We have " << apples << " apples for sale." << endl;
    cout << "The price is $" << pricePerApple << " per apple." << endl;

    //Calculating total price
    double totalPrice = (double) apples * pricePerApple;
    
    //Display total
    cout << "The total price is $" << totalPrice << "." << endl;


return 0;
}
