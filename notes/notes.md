!!This is a speacial notebook for study of C++!!

--Compiler--

    What is a Compiler:
        Compiler is what need to transfer the normal letters to maching language so you can run your code
    
    Why you need:
        If  don't have, you don't will be able to run your files in C++ and another languages because you don't have something to turn your code in binary language

    

--Blocks--

    Every C++ program has 3 building block you just used:
        1- Libraries "#include" -> give tools
            Libraries = toolboxes.
            You can't run a program without it
            Some libraries:
                <iostream> -> input/output (printing and reading)
                <cmath> -> math functions (square roots, powers, etc.)
                <vector> -> dynamic arrays
            Include library if you just need the tools

        2- Functions "main()" -> organize what happens
            A function is like a machine: you give it input, it does something, and sometimes it gives output
            In C++, every program starts at the "main()" function.
            Inside "main()" you put the instructions for what your program should do.
            Functions organize code into reusable blocks.

        3- Statements "cout", "return" -> tell the program what to do
            A statement is a single instruction.
            Every statement in C++ ends with a semicolon;
            A program is basically a sequence of statements that run top-to-bottom inside "main()"
            Statement are the actions of your program.


            How they connect:
                Libraires = give you tools.
                Funtions = define where and how you use tools
                Statements = the actual  actions you tell the computer to do
            
            Think of it like robotics:
                Libraries = the robot's sensors and motors
                Funtions = the robot's brain (deciding what to do with those sensors and motors)
                Statements = the specific commands ("move forward", "turn left")


--hello.cpp --

    #include <iostream>
    using namespace std;

    int main() {
    cout << "Hello, world!" << endl;
    return 0;
    }
        1- #include <iostream>
                #include: tells the compiler: "bring in extra tools from a library"
                <iostream> = Input/Output Stream. It gives us the ability to use cout (print to screen) and cin  (read input)
                    without this line, compiler won't know what "cout" is

        2- using namespace std;
            C++ organizes functions and objects into namespaces (like folders)
            "cout" lives inside the "std" (standard) namespace
            This line tells the compiler: "Whenever I use "cout", assume I mean "std::cout"
                If didn't write it, the result was:
                    std::cout << "Hello, world!" << std::endl;

        3- int main() {
            This defines the main function - the entry point of every C++ program.
            When run your program, the operating system looks for "main()" and starts executing from there.
            "int" means this function will return an integer value

        4- cout << "Hello, world!" << endl;
            "cout" = "caracter output" -> sends data to the console.
            "<<" = "insertion operator" -> think of it as pushing data into cout.
            "Hello, world!" = a string literal (sequence of characters).
            "endl" = "end line" -> moves to the next line after printing.
                Together, it prints the message and moves the cursor to a new line

        5- return 0;
            This ends the "main()" function and returns "0" to the operating system.
            By convention, returning "0" means: "Program ended successfully"
            If something went wrong, you might return another number

        6- }
            Closes the "main()" function block.

    Compiling:
        g++ hello.cpp -o hello ->
            g++ = the compiler.
            hello.cpp = your source code.
            -o hello = output an executable named hello.

        or press CTRL + ALT + N

    Run program on terminal:
        ./hello

--Cout/Cin--
    Cout
        Used to print on the screen
    Cin
        Used to input a character
        It is used with values and use the same type that variables
        ->Examples:
            #include <iostream>
            using namespace std;

            int main() {
                int age;
                cout << "Enter your age: ";
                cin >> age; // user types a number, stored in variable age

                cout << "You are " << age << " years old." << endl;
                return 0;
            }

            With multiple inputs:
                int x, y;
                cout << "Enter two numbers: ";
                cin >> x >> y;
                cout << "The sum is " << x + y << endl;

            Mix of input and update:
                int battery;
                cout << "Enter starting battery: ";
                cin >> battery;

                battery -= 30;
                cout << "After moving, battery is " << battery << "%" << endl;

--Variables--

    Variables are like a box with name on computer's memory
        It has a type (what kind of thing it stores)
        It has a name (so you can find it later)
        It has a value (the actual data stored inside)
    You need declare variables before using it

    General form:
        type name = value;
        ->Examples:
            int age = 20  -  integer (whole numbers)
            double pi = 3.14159;  -  floating point (decimals)
            char grade = 'A';  -  single character
            string name = "Arsev";  -  text (requires #include <string>)
            bool is0n = true;  -  true/false

    You can use variables in "cout":
        "int score = 100;
        cout << "New score: " << score << endl;"

    You can chage their value after:
        "int score = 100;
        cout << "New score: " << score << endl;
        
        int score = 150;
        cout << "New score: " << score << endl;"

    
    Doing math with variables
        C++ lets you calculate with them:
            int a = 5;
            int b = 3;
            int sum = a + b;
            int product = a * b;

            cout << "Sum" << sum << endl;
            cout << "Product" << product << endl;

    Updating variables
        int battery = 80
        battery = battery - 10;  -  subtract 10
        cout << "Battery: " << battery << "%" << endl;

        shortcuts operators:
            battery -= 10;  -  same as battery = battery - 10
            battery += 5;  -  add 5
            battery *= 2;  -  multiply by 2
            battery /= 2;  -  divide by 2

    Constants
        Sometimes you want a variable that never changes. Use const:
            const double PI = 3.14159;
                Now "PI" can't be changed by mistake.