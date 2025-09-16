// Call the libraries
#include <iostream>
using namespace std;

//Start the main function
int main() {
    // Ask the user to input the robot's battery level
    cout << "Enter the robot's battery level (0-100): " << endl;
    //Declare a variable to store the battery level
    int batteryLevel;
    //Get the user input and store it in the variable
    cin >> batteryLevel;
    //Ask how much battery the robot should use in first move
    cout << "Enter how much battery the robot should use in its first move: " << endl;
    //Declare a variable to store the battery usage
    int usedBattery;
    //Get the user input and store it in the variable
    cin >> usedBattery;
    //Calculate the remaining battery level after the first move
    /** int*/ batteryLevel -= usedBattery;
    /**You don't wanna create a new variable, just update the existing one
    so remove the int in front of batteryLevel in the line above
    */


    //Display the remaining battery level
    cout << "The robot's remaining battery level is: " << batteryLevel << "%" << endl;
    //Ask how much battery the robot should use in second move
    cout << "Enter how much battery the robot should use in its second move: " << endl;
    cin >> usedBattery;
    //Calculate the remaining battery level after the second move
    /** int*/ batteryLevel -= usedBattery;
    /**You don't wanna create a new variable, just update the existing one
    so remove the int in front of batteryLevel in the line above
    */

    
    //Display the remaining battery level
    cout << "Final battery left: " << batteryLevel << "%" << endl;

    return 0;
}

/**
 * int batteryLevel; - declare once
 * batterLevel -= something; - update later
 * never redeclare (int...) when updating, or C++ will think it's a new variable
 */