/*
Elias Robles
CSC-134
M2T1 cin method apple store
*/

#include <iosstream>
using namespace std;

int main(){
    //Set variables
    string name;
    double pricePerApple;
    int apples;

    //Show promts and input information
    cout << "Please enter your name.";
    cin >> name;
    cout << "Welcome to " << name << "'s apple farm." << endl;
    cout << "Please insert the price of each apple."
    cin >> pricePerApple;
    cout << "How many apples do you have?"
    cin >> apples

    //Display price and amount of apples
    cout << "We have " << apples << " apples for sale." << endl;
    cout << "The price is $" << pricePerApple << " per apple." << endl;

    //Calculating total price
    double totalPrice = (double) apples * pricePerApple;
    
    //Display total
    cout << "The total price is $" << totalPrice << "." << endl;


return 0;
}
