// Libs
#include <iostream>
#include <limits>
using namespace std;

// Main function
int main() {
    // Variables
    int battery_life;
    int disctance;
    int battery_usage;

    // input and check if battery_life is valid
    while (true) {
    cout << "Enter robot's starting life: " << endl;
    
        // Read user input
        cin >> battery_life;

        // Check if input is failed state
        if (cin.fail()) {
            cout << "Invalid input!. PLease enter a numberic value." << endl;

            // Clear the error state
            cin.clear();

            // Discard invalid input from the input buffer
            // This is important to avoid infinite loop
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else if (battery_life > 100 || battery_life < 0) {
            cout << "Percentage invalid, insert a percentage between 0 and 100." << endl;

            // Clear the error state
            cin.clear();

            // Discard invalid input from the input buffer
            // This is important to avoid infinite loop
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

        } else {
            // Input is valid, exit the loop
            break;
        }
    }



    for (int move = 1; move <= 3; move++) {
    cout << "Enter how much battery the robot should use in its move: " << endl;
    //Get the user input and store it in the variable
    cin >> battery_usage;
    
    battery_life -= battery_usage;
    cout << "The robot's remaining battery level is: " << battery_life << "%" << endl;
    }



/** 
    // First Move
    cout << "Enter how much battery the robot should use in its first move: " << endl;
    //Get the user input and store it in the variable
    cin >> battery_usage;
    battery_life -= battery_usage;
    cout << "The robot's remaining battery level is: " << battery_life << "%" << endl;
    
    
    // Second Move
    // Ask how much battery the robot should use in second move
    cout << "Enter how much battery the robot should use in its second move: " << endl;
    cin >> battery_usage;
    battery_life -= battery_usage;
    cout << "The robot's remaining battery level is: " << battery_life << "%" << endl;

    // Third Move
    cout << "Enter how much battery the robot should use in its first move: " << endl;
    cin >> battery_usage;
    battery_life -= battery_usage;
    cout << "The robot's remaining battery level is: " << battery_life << "%" << endl;

    // Final Output
    cout << "Final battery left: " << battery_life << "%" << endl;
*/

    return 0;
}