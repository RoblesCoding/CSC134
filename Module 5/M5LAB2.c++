/*
Elias Robles
M5LAB2 - Choose Your Own Adventure
This function has two storylines for the program
*/

#include <iostream>
#include <limits>
using namespace std;

//Declare functions length, width, height, displayData
double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double length, double width, double area);

int main() {
  //Promt the calculator
  cout << "Welcome to area rectange calculator!" << endl;

  //Declare Variables
  // Get the rectangle's length.
  double length = getLength();
   
  // Get the rectangle's width.
  double width = getWidth();
   
  // Get the rectangle's area.
  double area = getArea(length, width);
   
  // Display the rectangle's data.
  displayData(length, width, area);
   
return 0;
}

double getLength() {
  double length;
  bool validInput = false;
  cout << "What is the length of the rectangle?" << endl;
  
  while (!validInput) {
    cin >> length;
    
    if (cin) {
      validInput = true;
    }
    else {
      cout << "Invalid input, please enter a number." << endl;
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');  
    }
  }
  return length;
}

double getWidth() {
  double width;
  bool validInput = false;
  cout << "What is the width of the rectangle?" << endl;
  
  while (!validInput) {
    cin >> width;
    
    if (cin) {
      validInput = true;
    }
    else {
      cout << "Invalid input, please enter a number." << endl;
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
  }
  return width;
}

double getArea(double length,double width) {
  return length * width;
}

void displayData(double length,double width, double area) {
  cout << "These are the dimensions of the rectangle." << endl;
  cout << "The length is: " << length << "." << endl;
  cout << "The width is: " << width << "." << endl;
  cout << "The area is: " << area << "." << endl;
}