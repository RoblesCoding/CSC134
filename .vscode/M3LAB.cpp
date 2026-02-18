/*
Elias Robles
CSC-134
M3LAB1
This program is a choice program for a diplomatic meeting.
*/

#include <iostream>
using namespace std;

void chooseChoice1();
void chooseChoice2();

int main(){
    //variables
    int choice;
    //Prompt game
    cout << "You are a diplomat. Present an arguement with the rival to form a detente." << endl;
    cout << "What do you say? Enter 1 or 2 to respond." << endl;
    cout << "Choice 1: Good evening. I await our discussions of peace and detente for mutual properity." << endl;
    cout << "Choice 2: Good evening. I hope to negotiate mutual detente, and have the the force to ensure it." << endl;
    cin >> choice;
        if (1 == choice) {
            chooseChoice1();
        }

        else if(2 == choice) {
            chooseChoice2();
        }
        
        else {
            cout << "Invalid option. Reinput choice 1 or 2.";
        }
    
    cout << "Thanks for playing." << endl;
    return 0;
}

void chooseChoice1(){
    cout << "The rival is pleased with your words. This was a fruitful meeting." << endl;
}

void chooseChoice2(){
    cout << "The rival is displeased with your comment of force. This was not a fruitful meeting." << endl;
}