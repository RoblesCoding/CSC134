/*
Elias Robles
M5LAB1 - Choose Your Own Adventure
This function has two storylines for the program
*/
#include <iostream>
using namespace std;

//Declare all of the functions
void main_menu();
void chooseChoice1();
void chooseChoice2();
void chooseChoice3();
void chooseChoice11();
void chooseChoice12();
void chooseChoice21();
void chooseChoice22();
//int main
int main() {
    //Prompt the game
    cout << "Hello! Welcome to pro diplomat!" << endl;
    main_menu();
    cout << "Thanks for playing!" << endl;
    return 0;
}
//Present main menu
void main_menu() {
    //Variables
    int choice;
    bool validInput = false;  
    //While loop for inputs
    while (!validInput) {
        //Display program
        cout << "You are a diplomat and envoy in route to a nation previously hostile. New negotioations are happeneing to warm relations, and create peace." << endl;
        cout << "Determine the best way to create this peace, and create a new treaty." << endl;
        cout << "Please enter a number 1-4 for each choice respectivly." << endl;
        cout << "Choice 1: Good evening. Our histories have seen conflicts, however one should think of the idea of creating a new history of peace and development. Lets negotiate something greater." << endl;
        cout << "Choice 2: Good evening. In the history of our nations, we have both seen conflict, lets negotiate in order to not escalate." << endl;
        cout << "Choice 3: I actually do not care about this, I am letting this in the hands of the junior diplomant." << endl;
        cout << "Choice 4: [QUIT]" << endl;
        cin >> choice;
        //If statements
        if (choice == 1) {
            chooseChoice1();
            validInput = true;
        }
        else if (choice == 2) {
            chooseChoice2();
            validInput = true;
        }
        else if (choice == 3) {
            chooseChoice3();
            validInput = true;
        }
        else if (choice == 4) {
            return;
        }
        else {
            cout << "Invalid input, please enter a number 1-4." << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }
    }
}
//Present choice one
void chooseChoice1() {
    //variables
    int choice;
    bool validInput = false;
    cout << "The nations diplomats are pleased to hear a constructive peace. They discuss in their own language, before returning." << endl;
    cout << "They ask what terms are being discussed in order to create a constructive peace.'\n'" << endl;
    cout << "What do you compromise in order to ensure detente?" << endl;
    cout << "Choice 1: We are willing to negotiate a decrease in both of our nuclear stockpiles to achive mutual detente." << endl;
    cout << "Choice 2: We are willing to negotiate a deeper cooperation in economic affairs with our countries." << endl;
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
            chooseChoice12();
            validInput = true;
        }
        else {
            cout << "Invalid option. Reinput choice 1 or 2." << endl;
            cin.clear();
            cin.ignore(10000, '\n');
        }
    }
}
//Present choice 11
void chooseChoice11() {
    cout << "The nations diplomats are not that impressed with this suggestion. They sign on the decreasing arms agreement, and not much else." << endl;
    cout << "Game over" << endl;
}
//Present choice 12
void chooseChoice12() {
    cout << "The nations diplomats are happy to hear this recomendation, and move agree. They sign the economic deal, and a small dearmerment deal." << endl;
    cout << "Game Over" << endl;
}
//Present choice 2
void chooseChoice2() {
    int choice;
    bool validInput = false;    

    while (!validInput) {
        //Display program
        cout << "The nations diplomats acknoledge your arguement for peace. They discuss in their own language, before returning." << endl;
        cout << "Determine the best way to create this peace, and create a new treaty." << endl;
        cout << "Please enter a number 1-4 for each choice respectivly." << endl;
        cout << "Choice 1: We are willing to negotiate a decrease in both of our nuclear stockpiles to achive mutual detente." << endl;
        cout << "Choice 2: We are willing to negotiate a deeper cooperation in economic affairs with our countries." << endl;
        cin >> choice;

        if (choice == 1) {
            chooseChoice21();
            validInput = true;
        }
        else if (choice == 2) {
            chooseChoice22();
            validInput = true;
        }
        else {
            cout << "Invalid input, please inter a number 1-2." << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }
    }
}
//Present choice 21
void chooseChoice21() {
    cout << "The nations diplomats understand your solenm ask for decreasing arms. Both parties agree to a wide dearmerment agreement." << endl;
    cout << "Game Over" << endl;
}
//Present choice 22
void chooseChoice22() {
    cout << "The diplomats are happy to hear this suggestion, but got cold feet mid-negotiotion. A small economic deal was signed." << endl;
    cout << "Game Over" << endl;
}
//Present choice 3
void chooseChoice3() {
    cout << "The young diplomat is not able to handle the presure, and gives the other diplomats a great deal, but us a poor deal." << endl;
    cout << "Game Over" << endl;
}