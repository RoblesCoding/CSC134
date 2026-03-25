/*
Elias Robles
M5HW - Gold
This will answer all six (6) questions
*/

#include <iostream>
#include <limits>
#include <string>
using namespace std;

void main_menu();

int main() {
    cout << "Generating main menu." << endl;
    main_menu();
    return 0;
}

void programOne();
void programTwo();
void programThree();
void programFour();
void programFive();

void main_menu() {
    bool validInput = false;
    int choice;
    //Promt for specific program
    cout << "Welcome to M5HW menu. Please select a program to run by inputing numbers 1-6." << endl;
    cout << "Program Menu:" << endl;
    cout << "Program 1: Rain Average" << endl;
    cout << "Program 2: Hyperrectangle Volume calculator" << endl;
    cout << "Program 3: Roman Numeral Generator" << endl;
    cout << "Program 4: Geometry Calculator" << endl;
    cout << "Program 5: Distance a Vehicle Travels" << endl;
    cout << "Program 6: [Quit to Main Menu]" << endl;

    while(!validInput) {
        cin >> choice;

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
        else if (choice == 5) {
            programFive();
            validInput = true;
        }
        else if (choice == 6) {
            return;
        }
        else {
            cout << "Invalid input, please enter a number 1-6." << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }
    }
}

void programOne() {
    //Variables
    bool validInput = false;
    string month1;
    string month2;
    string month3;
    double monthRain1;
    double monthRain2;
    double monthRain3;
    double averageRain;
    cout << "Welcome to average rain calculator" << endl;
    
    cout << "Enter month one: " << endl;
    cin >> month1;
    cout << "Enter rainfall for " << month1 << endl;

        while(!validInput) {
            cin >> monthRain1;
            if (monthRain1 > 0) {
                validInput = true;
            }
            else {
                cout << "Invalid input, please enter a number above 0." << endl;
                cin.clear();
                cin.ignore(10000, '\n');
                continue;
            }
        }
    
    cin.clear();
    cin.ignore(10000, '\n');
    cout << "Enter month two: " << endl;
    cin >> month2;
    cout << "Enter rainfall for " << month2 << endl;

        while(!validInput) {
            cin >> monthRain2;
            if (monthRain2 > 0) {
                validInput = true;
            }
            else {
                cout << "Invalid input, please enter a number above 0." << endl;
                cin.clear();
                cin.ignore(10000, '\n');
                continue;
            }
        }
    
    cin.clear();
    cin.ignore(10000, '\n');
    cout << "Enter month three: " << endl;
    cin >> month3;
    cout << "Enter rainfall for " << month3 << endl;

        while(!validInput) {
            cin >> monthRain3;
            if (monthRain3 > 0) {
                validInput = true;
            }
            else {
                cout << "Invalid input, please enter a number above 0." << endl;
                cin.clear();
                cin.ignore(10000, '\n');
                continue;
            }
        }
    averageRain = (monthRain1+monthRain2+monthRain3) / 3;
    cout << "Average rainfall for " << month1 << ", " << month2 << ", " << month3 << " is " << averageRain << "inches." << endl;
    cout << "Thank you for using average rain calculator." << endl;
}

double getLength();
double getWidth();
double getHeight();
double getVolume(double length, double width, double height);
void displayData(double length, double width, double height, double volume);
void programTwo() {
    //Promt the calculator
    cout << "Welcome to volume of block calculator!" << endl;

    //Declare Variables
    // Get the rectangle's length.
    double length = getLength();
   
    // Get the rectangle's width.
    double width = getWidth();
    
    //Get the rectangles height.
    double height = getHeight();
  
    // Get the rectangle's volume.

    double volume = getVolume(length, width, height);
   
    // Display the rectangle's data.
    displayData(length, width, height, volume);
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

double getHeight() {
    double height;
    bool validInput = false;
    cout << "What is the height of the rectangle?" << endl;
  
    while (!validInput) {
        cin >> height;
    
        if (cin) {
        validInput = true;
        }
        else {
        cout << "Invalid input, please enter a number." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  
        }
    }
    return height;
}

double getVolume(double length, double width, double height) {
    return length * width * height;
}

void displayData(double length,double width, double height, double volume) {
    cout << "These are the dimensions of the rectangle." << endl;
    cout << "The length is: " << length << "." << endl;
    cout << "The width is: " << width << "." << endl;
    cout << "The height is: " << height << "." << endl;
    cout << "The volume is: " << volume << "." << endl;
}

void programThree() {
    bool validInput = false;
    int number;
    cout << "Welcome to Roman Numeral Numbers 1-10." << endl;
    cout << "Enter a number 1-10." << endl;
    cin >> number;

    while (!validInput) {
        if (number >= 1 && number <= 10) {
            validInput = true;
        }
        else {
            cout << "Invalid input, please enter a number 1-10." << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            cin >> number;
        }
    }
    switch(number) {
        case 1:
            cout << "Numeral I" << endl;
            break;
        case 2:
            cout << "Numeral II" << endl;
            break;
        case 3:
            cout << "Numeral III" << endl;
            break;
        case 4:
            cout << "Numeral IV" << endl;
            break;
        case 5:
            cout << "Numeral V" << endl;
            break;
        case 6:
            cout << "Numeral VI" << endl;
            break;
        case 7:
            cout << "Numeral VII" << endl;
            break;
        case 8:
            cout << "Numeral VIII" << endl;
            break;
        case 9:
            cout << "Numeral IX" << endl;
            break;
        case 10:
            cout << "Numeral X" << endl;
            break;
        default:
            cout << "Please enter a number 1-10." << endl;
    }
    cout << "Thank you for using Roman Numerals program." << endl;
}

double areaCircle();
double areaRectangle();
double areaTriangle();

void programFour() {
    cout << "Welcome to Area Geometry Calculator." << endl;
    cout << "What geometric shape do you want the area for?" << endl;
    cout << "Choice 1: Calculate the area of a circle." << endl;
    cout << "Choice 2: Calculate the area of a rectangle." << endl;
    cout << "Choice 3: Calculate the area of a triangle." << endl;
    cout << "Choice 4: [Quit the Program]" << endl;
    int choice;
    double area;
    bool validInput = false;
    while (!validInput) {
        cin >> choice;

        if (choice == 1) {
            cout << "You have chosen to calculate the area of a circle." << endl;
            double area = areaCircle();
            cout << "The area of the circle is: " << area << "." << endl; 
            validInput = true;
        }
        else if (choice == 2) {
            cout << "You have chosen to calculate the area of a rectangle." << endl;
            double area = areaRectangle();
            cout << "The area of the rectangle is: " << area << "." << endl;
            validInput = true;
        }
        else if (choice == 3) {
            cout << "You have chosen to calculate the area of a triangle." << endl;
            double area = areaTriangle();
            cout << "The area of the triangle is: " << area << "." << endl;
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

double areaCircle() {
    double radius;
    bool validInput = false;
    cout << "What is the radius of the circle?" << endl;
  
    while (!validInput) {
        cin >> radius;
    
        if (cin && radius > 0) {
        validInput = true;
        }
        else {
        cout << "Invalid input, please enter a positive number." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  
        }
    }
    return 3.14 * radius * radius;
}

double areaRectangle() {
    double length;
    double width;
    bool validInput = false;
    cout << "What is the length of the rectangle?" << endl;
  
    while (!validInput) {
        cin >> length;
    
        if (cin && length > 0) {
        validInput = true;
        }
        else {
        cout << "Invalid input, please enter a positive number." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  
        }
    }
    cout << "What is the width of the rectangle?" << endl;
  
    while (!validInput) {
        cin >> width;
    
        if (cin && width > 0) {
        validInput = true;
        }
        else {
        cout << "Invalid input, please enter a positive number." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  
        }
    }
    return length * width;
}

double areaTriangle() {
    double width;
    double height;
    bool validInput = false;
    cout << "What is the base of the triangle?" << endl;
  
    while (!validInput) {
        cin >> width;
    
        if (cin && width > 0) {
        validInput = true;
        }
        else {
        cout << "Invalid input, please enter a positive number." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  
        }
    }
    cout << "What is the height of the triangle?" << endl;
  
    while (!validInput) {
        cin >> height;
    
        if (cin && height > 0) {
        validInput = true;
        }
        else {
        cout << "Invalid input, please enter a positive number." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  
        }
    }
    return 0.5 * width * height;
}

void programFive() {
    //Initial Variables
    double speed;
    int hours;
    double distance;
    bool validInput = false;
    cout << "Welcome to distance traveled calculator." << endl;
    cout << "What is the speed of the vehicle in miles per hour?" << endl;
    //While statement
    while (!validInput) {
        cin >> speed;
    
        if (speed > 0) {
        validInput = true;
        }
        else {
        cout << "Invalid input, please enter a positive number." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  
        }
    }
    cout << "How many hours has the vehicle traveled?" << endl;
    //While statement
    while (!validInput) {
        cin >> hours;
    
        if (hours > 0) {
        validInput = true;
        }
        else {
        cout << "Invalid input, please enter a positive number." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  
        }
    }
    //Variables for hours traveled
    const int MIN_NUMBER = 1;
    const int MAX_NUMBER = hours;
    int intergerIncrease = 1;
    
    distance = speed * intergerIncrease;
    cout << "Hours" << "\t" << "Distance" << endl;
    while (intergerIncrease <= MAX_NUMBER) {
        cout << intergerIncrease << "\t" << distance << endl;
        intergerIncrease++;
    }
}