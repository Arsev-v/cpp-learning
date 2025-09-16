// Call libraries
#include <iostream>
#include <cmath>
//Cmath is not necessary, so don't put it. Make your code clean
using namespace std;

// Declare variables
int battery_1 = 100;

//Variables if its not to be global variable should be inside of the program main(){}

// Start the program
int main() {
    cout << "The robot's battery is: " << battery_1 << "%" << endl;
    // first update
    battery_1 -= 30;
    cout << "The robot's battery is: " << battery_1 << "%" << endl;
    // second update
    battery_1 -= 50;
    cout << "The robot's battery is: " << battery_1 << "%" << endl;
    // third update
    battery_1 -= 20;
    cout << "The robot's battery is: " << battery_1 << "%" << endl;

    // Should have put "return 0;" since it was a int program to finish successfuly
}