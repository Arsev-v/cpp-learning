// Call library
#include <iostream>
// Call limits library to use numeric_limits
#include <limits>

using namespace std;

// Main function
int main() {
    // Declare variables
    // Instead of using integrers it's possible use float or double
    int num1, num2;

    // Check if the input is valid
    while(true){

        // Ask user for two numbers
        cout << "Please enter the first number: " << endl;
    
        // Read user input
        cin >> num1;

        // Second number input
        cout << "Please enter the second number: " << endl;
        cin >> num2;

        // Check if input is failed state
        if (cin.fail()) {
            cout << "Invalid input!. PLease enter a numberic value." << endl;

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


    //Display numbers
    cout << "You inserted: " << num1 << " and " << num2 << endl;

    // With the function std::max we can find the bigger number in just one line
    /**
     *  The function returns the larger of the two values, which we store in the 'result' variable.
     *      int result = std::max(a, b);
     *  Print the result to the console
     *      std::cout << "The larger of " << a << " and " << b << " is: " << result << std::endl;
     */

    // Compare numbers and display the bigger one
    if (num1 > num2) {
        cout << num1 << " is bigger than " << num2 << endl;
    } else if (num1 < num2) {
        cout << num2 << " is bigger than " << num1 << endl;
    } else {
        cout << "Both numbers are equal." << endl;
    }

    
    // return 0 to indicate successful completion
    return 0;
}