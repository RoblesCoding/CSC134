/*
Elias Robles
M5LAB1 - Choose Your Own Adventure
This function has two storylines for the program
*/
#include <iostream>
using namespace std;

void chooseChoice1();
void chooseChoice2();
void chooseChoice11();
void chooseChoice22();

int main() {
    cout << "Hello! Welcome to pro diplomat!" << endl;
    void main_menu();
    cout << "Thanks for playing!" << endl;
return 0;
}

void main_menu() {
    //Display program
    cout << "Please enter a number 1-4 for each choice respectivly." << endl;
    cout << "Choice 1: Good evening. I await our discussions of peace and detente for mutual properity." << endl;
    cout << "Choice 2: Good evening. I hope to negotiate mutual detente, and have the the force to ensure it." << endl;
    
    //Variables
    int choice;
    bool validInput = false;

    cin >> choice;

    while (!validInput) {
        if (choice = 1) {

        }
    }


}

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