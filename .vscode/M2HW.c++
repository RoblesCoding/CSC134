/*
ELias Robles
CSC-134
M2HW - Gold
This program will answer Question 1
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    //Variables
    string name;
    double starting_account_balance = 0;
    double deposit;
    double withdraw;
    double difference;
    double final_account_balance;

    //Set function for decimal places
    std::cout << std::fixed; 
    std::cout << std::setprecision(2); 

    //Promt the input for banking information
    cout << "Welcome to SYM Bank. What is your name?" << endl;
    cin >> name;
    cout << "Welcome " << name << ". Your account balance $" << starting_account_balance << "." << endl;
    cout << "Please enter your deposit amount. If you do not wish to deposit; Press 0." << endl;
    cin >> deposit;
    cout << "Please enter your withdraw amount. If you do not wish to withdraw; Press 0." << endl;
    cin >> deposit;
    
    //Perform Calculations
    difference = deposit - withdraw;
    final_account_balance = starting_account_balance + difference;

    //Show the final prompt
    cout << "Your new account balance is $" << final_account_balance << "." << endl;
    cout << "Thank you for using SYM Bank." << endl;

return 0;
}