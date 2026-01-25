/*
ELias Robles
CSC-134
M2HW - Gold
This program will answer Question 1
*/

#include <iostream>
using namespace std;

int main(){
    //Variables
    string name;
    double starting_account_balance;
    double deposit;
    double withdraw;
    double final_account_balance;

    //Promt the input for banking information
    cout << "Welcome to SYM Bank. What is your name?" endl;
    cin >> name;
    cout << "Welcome " << name << ". Your account balance $%.2f\n" << starting_account_balance << "." << endl;
    cout << "Please enter your deposit amount. If you do not wish to deposit; Press 0." << endl;
    cin >> deposit;
    cout << "Please enter your withdraw amount. If you do not wish to withdraw; Press 0." << endl;
    cin >> deposit;
    
    //Perform Calculations
    final_account_balance = starting_account_balance - withdraw + deposit;

    //Show the final prompt
    cout << "Your new account balance is $%.2f\n" << starting_account_balance << "." << endl;
    cout << "Thank you for using SYM Bank."

return 0
}