/*
Elias Robles
CSC-134
M5T1 - Intro to Functions
Create one  void function
create on value returning function
*/

#include <iostream>
using namespace std;

//Create int and void functions respecively
void say_hello();
int give_the_answer();
int double_a_number(int num);

int main() {
    cout << "Hello from int main()" << endl;
    //Load function say_hello
    say_hello();
    int my_answer = give_the_answer();
    int twotimes = double_a_number(7);
    cout << "Here is the answer: " << my_answer << endl;
    cout << "Here's another number: " << twotimes << endl;
return 0;
}

void say_hello() {
    //Display function string
    cout << "Hi from function say_hello()" << endl;
    return;
}

int give_the_answer() {
    //return the correct number
    return 42;
}

int double_a_number(int num) {
    //Multiply the number
    int new_num = num *2;
    return new_num;
}
