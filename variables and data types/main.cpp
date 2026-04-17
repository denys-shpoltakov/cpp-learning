#include <iostream>
using namespace std;

int main() {
    string greeting = "Hello Bob"; // string (text)
    int number = 10; // integer (whole number without decimals)
    double doubleNumber = 5.5; // floating point number (with decimals)
    bool isAdult = true; // boolean (true / false) in output 1 = true / 0 = false

    cout << greeting << endl; // endl is creating a new line like \n
    cout << number << endl; // cout means character's output and with insertion operator "<<" you can do order to display a stream
    cout << doubleNumber << endl;
    cout << isAdult << endl;
    const float playerHP = 100.0f; // constant if you don't need to change a value or assign a new value
}