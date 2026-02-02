/*
Elias Robles
CSC-134
Dice Rolls
*/

#include <iostream>
#include <cmath> 
#include <ctime>
using namespace std;

int main() {
    //Print introduction
    cout << "Hello! Let's roll some dice and play Craps!" << endl;

    //Prompt input for seed
    int seed = time(0);

    //Display seed
    cout << "Your seed is: " << seed << endl;

    srand(seed);

    //Maximum number of six, for six sides of a cube
    const int MAX = 6;
    int roll1, roll2, total;

    roll1 = (rand() % MAX) + 1; // Divide by MAX
    cout << "You rolled a " << roll1 << "." << endl;

    roll2 = (rand() % MAX) + 1; // Divide by MAX
    cout << "You rolled a " << roll2 << "." << endl;

    total = roll1 + roll2;
    cout << "Your total is " << total << "." << endl;

    //Let play CRAPS
    //Create If tree for the variations of the game
    //7 and 11 win
    //2 and 12 lose
    //Other numbers come later

    if (total == 7){
        cout << "Lucky seven, you win!" << endl;
    }
    else if (total == 11){
        cout << "Eleven, you win!" << endl;
    }
    else if (total == 2){
        cout << "Snake eyes, you lose." << endl;
    }
    else if (total == 12){
        cout << "Boxcars, you lose." << endl;
    }
    else {
        cout << "Your point total is " << total << "." << endl;
    }
    cout << "Thanks for playing." << endl;

return(0);
}