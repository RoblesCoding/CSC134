/*
ELias Robles
CSC-134
M2HW - Gold
This program will answer Question 4
*/

#include <iostream>
using namespace std;

int main(){
    //Variables
    string school, team, letsGo, cheerOne, cheerTwo;
    letsGo = "Lets go";

    //Input school and team
    cout << "What is your school's name?" << endl;
    cin >> school;
    cout << "What is your team's name?" << endl;
    cin >> team;

    //Create string
    cheerOne = letsGo + " " + school;
    cheerTwo = letsGo + " " + team;

    cout << cheerOne << endl;
    cout << cheerOne << endl;
    cout << cheerOne << endl;
    cout << cheerTwo << endl;

return 0;
}


