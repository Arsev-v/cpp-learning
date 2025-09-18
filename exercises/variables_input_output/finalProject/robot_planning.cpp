// Call libs
#include <iostream>
#include <limits>
using namespace std;

// Main function
int main() {

    // Declare variables
    int battery_life;
    int battery_usage;
    int distance;

    // Ask for user input and check
    // loop until valid input is received
    while (true) {
        cout << "Enter robot's starting life: " << endl;

        cin >> battery_life;
        // Check if input is failed state
            if (cin.fail()) {
                cout << "Invalid percentage!. Please enter a numeric value." << endl;

                // Clear the error state
                cin.clear();
                // Discard invalid input from the input buffer
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            } else if (battery_life > 100 || battery_life < 0) {
                cout << "Percentage invalid, insert a percentage between 0 and 100." << endl;

                // Clear the error state
                cin.clear();
                // Discard invalid input from the input buffer
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            } else {
                // Input is valid, exit the loop
                break;
            }
    }

    //Correction of the part under this block of line
    while (true) {
        cout << "How many moves should the robot make? " << endl;
        cin >> distance;

        if (cin.fail() || distance <= 0 ) {
            cout << " Invalid number of moves. Try again." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            break;
        }
    }

/** 
 * INCORRECT CODE BLOCK
 * 
 *     cout << "How many moves should the robot make? " << endl;
    cin >> distance;
    //limit ditance to the same number of battery life
    if (distance > battery_life || distance < 0) {
        cout << "Distance exceeds battery life. Setting distance to " << distance << "." << endl;
        distance = battery_life;
        // Distance cannot be negative
        cout << "Distance cannot be negative. Setting distance to " << distance << "." << endl;
    } else if (distance < 0) {
        cout << "Distance cannot be negative. Setting distance to " << distance << "." << endl;
        distance = 0;

    }
*/


    cout << "How many moves should the robot make? " << endl;
    cin >> distance;
    //limit ditance to the same number of battery life
    if (distance > battery_life || distance < 0) {
        cout << "Distance exceeds battery life. Setting distance to " << distance << "." << endl;
        distance = battery_life;
        // Distance cannot be negative
        cout << "Distance cannot be negative. Setting distance to " << distance << "." << endl;
    } else if (distance < 0) {
        cout << "Distance cannot be negative. Setting distance to " << distance << "." << endl;
        distance = 0;

    }

    // Plan moves
    for (int move=1; move <= distance; move++) {
        cout << "Enter battery for the move " << move << ": " << endl;
        cin >> battery_usage;
        if (battery_life == 0) {
            // Battery is empty, mission failed
            cout << "The robot's battery is empty. Mission failed." << endl;
            break;
        } else if (battery_usage > battery_life) {
            // Battery usage exceeds current battery life
            cout << "Battery usage exceeds current battery life. Please enter a valid amount." << endl;
            move--;
            continue;
        } else {
            // Deduct battery usage from battery life
            battery_life -= battery_usage;
            cout << "After move " << move << ", battery life is " << battery_life << "%" << endl;
            if (battery_life > 0 && move == distance) {
                // Mission complete
                cout << "Mission complete! Battery left: " << battery_life << "%" << endl;
            } else {
                cout << "Mission complete! Batter left: " << battery_life << "%" << endl;
            }

        }
    }

    return 0;
}



/**
 * 
 * ENTIRE CORRECT CODE BLOCK
 * 
 * // Libraries
#include <iostream>
#include <limits>
using namespace std;

// Main function
int main() {
    int battery_life;
    int num_moves;

    // --- Step 1: Get starting battery ---
    while (true) {
        cout << "Enter robot's starting life (0–100): ";
        cin >> battery_life;

        if (cin.fail() || battery_life < 0 || battery_life > 100) {
            cout << "Invalid input. Please enter a percentage between 0 and 100." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            break; // valid
        }
    }

    // --- Step 2: Get number of moves ---
    while (true) {
        cout << "How many moves should the robot make? ";
        cin >> num_moves;

        if (cin.fail() || num_moves <= 0) {
            cout << "Invalid input. Please enter a positive number." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            break; // valid
        }
    }

    // --- Step 3: Execute moves ---
    for (int move = 1; move <= num_moves; move++) {
        // Stop if battery is empty
        if (battery_life == 0) {
            cout << "The robot's battery is empty. Mission failed." << endl;
            break;
        }

        int battery_usage;

        // Validate usage for this move
        while (true) {
            cout << "Enter battery for move " << move << ": ";
            cin >> battery_usage;

            if (cin.fail() || battery_usage < 0 || battery_usage > battery_life) {
                cout << "Invalid usage. Must be between 0 and " << battery_life << "." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            } else {
                break; // valid usage
            }
        }

        // Apply usage
        battery_life -= battery_usage;
        cout << "After move " << move << ", battery life is " << battery_life << "%" << endl;
    }

    // --- Step 4: Final Result ---
    if (battery_life == 0) {
        cout << "The robot's battery is empty. Mission failed." << endl;
    } else {
        cout << "Mission complete! Battery left: " << battery_life << "%" << endl;
    }

    return 0;
}

 */