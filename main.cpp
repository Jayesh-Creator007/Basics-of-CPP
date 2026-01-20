#include <iostream>
#include <string>
using namespace std;

int main()
{
    // -----------------------------
    // Basic Output in C++
    // -----------------------------

    cout << "Hello" << endl;
    cout << "World" << endl << endl;

    // -----------------------------
    // Variables in C++
    // -----------------------------

    // int → used to store whole numbers (no decimals)
    int marks = 85;
    int total = 100;
    cout << "You scored: " << marks << "/" << total << endl << endl;

    // float → used to store decimal values
    float gpa = 3.7f;
    float price = 50.27f;
    cout << "Your GPA is: " << gpa << endl;
    cout << "Amount to pay: " << price << endl << endl;

    // double → higher precision decimal values
    double pi = 3.14159265358979;
    cout << "Value of pi: " << pi << endl << endl;

    // char → stores single characters
    char grade = 'A';
    char slash = '/';
    cout << "Your grade: " << grade << endl;
    cout << "In C++, you can use '" << slash << "' to create inline comments or paths" << endl << endl;

    // bool → stores true or false
    bool isOnline = true;
    cout << "Is the user online? " << isOnline << endl << endl; // prints 1 for true, 0 for false

    // string → used to store text (instead of char arrays in C)
    string name = "Jayesh";
    string language = "C++ Language";
    cout << "Hello, my name is " << name << endl;
    cout << "I am learning " << language << endl;

    return 0;
}
