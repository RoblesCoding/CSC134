/*
Elias Robles
CSC-134
This program will find the area of two rectangles.
The program will then compare rectangle areas.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    //Set function for decimal places
    std::cout << std::fixed;
    std::cout << std::setprecision(2);

    //variables
    //Rectangle one dimensions
    double lengthOne;
    double widthOne;
    //Rectangle two dimensions
    double lengthTwo;
    double widthTwo;

    //Print Prompt
    cout << "Welcome to Rectangle Area Calculator." << endl;
    cout << "This program will find the area of two rectangles." << endl;
    cout << "Please input the first rectangle's length." << endl;
    cin >> lengthOne;
    cout << "Please input the first rectangle's width." << endl;
    cin >> widthOne;
    cout << "Please input the second rectangle's length." << endl;
    cin >> lengthTwo;
    cout << "Please input the second rectangle's width." << endl;
    cin >> widthTwo;

    //Calculate Areas
        double areaOne = lengthOne * widthOne;
        double areaTwo = lengthTwo * widthTwo;

    //Print Results
    cout << "The first rectangle's area is " << areaOne << "sqft." << endl;
    cout << "The second rectangle's area is " << areaTwo << "sqft." << endl;

    //Determine which one is larger
    if (areaOne > areaTwo){
        cout << "Rectangle one's is larger." << endl;
    }

    else if (areaTwo > areaOne){
        cout << "Rectangle two's area is larger." << endl;
    }
    else if (areaOne == areaTwo){
        cout << "Both rectangles have the same area." << endl;
    }
return 0;
}