/*
Elias Robles
CSC-134
M3HW1
This is a program that will have all (Gold) of the programs answered.
*/

#include <iostream>
#include <cmath> 
#include <ctime>
using namespace std;

void programOne();
void programTwo();
void programThree();
void programFour();

int main() {
    //Variables
    int choice;
    bool validInput = false;

    //While statment for valid input
    while (!validInput) {
        //Prompt program selector
        cout << "Welcome to program selector!" << endl;
        cout << "Which program do you wish to choose?" << endl;
        cout << "Program 1: Simple Chatbot." << endl;
        cout << "Program 2: Receipt Calculator." << endl;
        cout << "Program 3: Choose your own adventure." << endl;
        cout << "Program 4: Math practice." << endl;

        cin >> choice;

        if (cin.fail()) {
            cout << "This is not a valid input, please choose from 1-4." << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }
        //Choice boolean
        if (choice == 1) {
            programOne();
            validInput = true;
        }
        else if (choice == 2) {
            programTwo();
            validInput = true;
        }
        else if (choice == 3) {
            programThree();
            validInput = true;
        }
        else if (choice == 4) {
            programFour();
            validInput = true;
        }
        else {
            cout << "This is not a valid input, please choose from 1-4." << endl;
            cin.clear();
            cin.ignore(10000, '\n');
        }
    }
return 0;
}

void programOne(){
    //Variables
    int chatbotChoice;
    bool validInput = false;

    //Promt Chatbot
    cout << "Hello! I am simple chatbot Version 1. Do you think I am useful?" << endl;
    cout << "Enter 1 for yes and 2 for no." << endl;

    //Choices
    while (!validInput) {
        //Prompt Input
        cin >> chatbotChoice;

        if (cin.fail()) {
            cout << "I do not understand. I am a chatbot yet I cannot chat. Please pick 1 or 2." << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }
        if (chatbotChoice == 1) {
            cout << "Thanks. I am useful. END PROGRAM." << endl;
            validInput = true;
        }
        else if (chatbotChoice == 2) {
            cout << "Yes, I am not useful. END PROGRAM." << endl;
            validInput = true;
        }
        else {
            cout << "I do not understand. I am a chatbot yet I cannot chat. Please pick 1 or 2." << endl;
            cin.clear();
            cin.ignore(10000, '\n');
        }
    }
}

void programTwo() {
    //Variables
    int meals;
    int takeaway;
    double pricePerMeal;
    double priceBeforeTax;
    double tax = 0.08;
    double amountTax;
    double tip = 0.15;
    double amountTip = 0;
    double priceAfter;
    bool validInput = false;
    //Promt Calculator
    cout << "Welcome to the restaurant checkout!" << endl;

    //Choices
    while (!validInput) {
        //Inputs
        cout << "How many meals did you have?" << endl;
        cin >> meals;
        cout << "What was the price of the meals?" << endl;
        cin >> pricePerMeal;
        cout << "Finally, was the meal(s) for here or to go? Enter 1 for dine in, and 2 for takeaway." << endl;
        cin >> takeaway;

        if (cin.fail()) {
            cout << "Please input correct values. Reloding Calulator." << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }
        //Perform calculations
        if (takeaway == 1 && pricePerMeal > 0 && meals > 0) {
            priceBeforeTax = meals * pricePerMeal;
            amountTax = priceBeforeTax * tax;
            amountTip = priceBeforeTax * tip;
            priceAfter = priceBeforeTax + amountTax + amountTip;
            validInput = true;
        }
        else if (takeaway == 2 && pricePerMeal > 0 && meals > 0) {
            priceBeforeTax = meals * pricePerMeal;
            amountTax = priceBeforeTax * tax;
            priceAfter = priceBeforeTax + amountTax;
            validInput = true;
        }
        else {
            cout << "Please input correct values. Reloding Calulator." << endl;
        }
    }

    //Display values and display message
    cout << "" << endl;
    cout << "Thank you, here is your total." << endl;
    cout << "Price: $" << priceBeforeTax << endl;
    cout << "Tax: $" << amountTax << endl;
    cout << "Tip: $" << amountTip << endl;
    cout << "Total: $" << priceAfter << endl;
    cout << "" << endl;
    cout << "Eat with us again!" << endl;
}

void chooseChoice1();
void chooseChoice2();
void chooseChoice11();
void chooseChoice22();

void programThree() {
    //variables
    int choice;
    bool validInput = false;
    //Prompt game
    while (!validInput) {
        //Dialogue
        cout << "You are a diplomat. Present an arguement with the rival to form a detente." << endl;
        cout << "What do you say? Enter 1 or 2 to respond." << endl;
        cout << "Choice 1: Good evening. I await our discussions of peace and detente for mutual properity." << endl;
        cout << "Choice 2: Good evening. I hope to negotiate mutual detente, and have the the force to ensure it." << endl;
        cin >> choice;

        if (cin.fail()) {
            cout << "Please enter a number (1 or 2)." << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }
        //Choices
        if (1 == choice) {
            chooseChoice1();
            validInput = true;
        }
        else if (2 == choice) {
            chooseChoice2();
            validInput = true;
        }
        else {
        cout << "Invalid option. Reinput choice 1 or 2." << endl;
        cin.clear();
        }
    }
}
//Present choice one
void chooseChoice1() {
    //variables
    int choice;
    bool validInput = false;
    cout << "The rival is pleased with your words. He is ready to engage your wishes of detente." << endl;
    cout << "What do you compromise in order to ensure detente?" << endl;
    cout << "Choice 1: We are willing to negotiate a decrease in both of our nuclear stockpiles to achive mutual detente." << endl;
    cout << "Choice 2: We are willing to increase investment into your country in order to achive economic peace and mutual detente." << endl;
    cin >> choice;

    //Prompt game
    while (!validInput) {
        if (cin.fail()) {
            cout << "Invalid option. Reinput choice 1 or 2." << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }
        if (1 == choice) {
            chooseChoice11();
            validInput = true;
        }
        else if (2 == choice) {
            chooseChoice22();
            validInput = true;
        }
        else {
            cout << "Invalid option. Reinput choice 1 or 2." << endl;
            cin.clear();
            cin.ignore(10000, '\n');
        }
    }
}
//Present choice two
void chooseChoice2() {
    cout << "The rival is displeased with your comment of force. They nuked your country and you by proxy." << endl;
    cout << "GAME OVER GAME OVER GAME OVER" << endl;
}
//Present choice 11
void chooseChoice11() {
    cout << "The rival is not impressed with your suggestion. They sign on the agreement before making more nuclear devices." << endl;
    cout << "Game over" << endl;
}
//Present choice 22
void chooseChoice22() {
    cout << "The rival is pleased with your suggestion. There is a noticeable thaw in the relationship between the two countries." << endl;
    cout << "Success!" << endl;
}

void programFour() {
    //Variables
    int number1;
    int number2;
    int numberFinal;
    int numberInput;
    bool validInput = false;

    //Prompt input for seed
    int seed = time(0);
    srand(seed);
    const int MAX = 9;
    number1 = (rand() % MAX) + 1; // Divide by MAX
    number2 = (rand() % MAX) + 1; // Divide by MAX

    //Print introduction
    cout << "Hello! This is a simple addition calculator." << endl;
    cout << "What is " << number1 << " + " << number2 << "?" << endl;
    numberFinal = number1 + number2;
    cin >> numberInput;

    while (!validInput) {
        if (numberInput == numberFinal) {
            cout << "You have added correctly!" << endl;
            cout << "The number is " << numberFinal << endl;
            validInput = true;
        }
        else if (numberInput != numberFinal) {
            cout << "That is not correct." << endl;
            cout << number1 << " + " << number2 << " does not equal " << numberInput << endl;
            cout << "Try again!" << endl;
            cin.clear();
            validInput = true;
        }
        else {
            cout << "Invalid option. Reinput number." << endl;
            cin.clear(); 
        }
    }
}