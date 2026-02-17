/*
Elias Robles
CSC-134
This program is a choice program
*/

#include <iostream>
using namespace std;

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
        cout << "Invalid option. Reinput choice 1 or 2."
    }

    cout << "Thanks for playing," << endl;
    return 0;
}
