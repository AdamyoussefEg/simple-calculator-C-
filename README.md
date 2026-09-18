Simple C++ Calculator Class

A lightweight, object-oriented C++ calculator implementation that demonstrates core Object-Oriented Programming (OOP) principles including encapsulation, state tracking, and error handling.

Features

Basic Arithmetic Operations: Supports Addition, Subtraction, Multiplication, and Division.

State & Action Tracking: Remembers the running total and records the last performed action.

Zero-Division Protection: Handles division by zero gracefully without crashing.

State Reset: Provides a clean way to clear current results and return to zero.

Code Example

#include <iostream>

int main() {
    clsCalculator calc;

    calc.Add(100);
    calc.PrintResult(); // Result After Adding 100 is 100

    calc.Subtract(20);
    calc.PrintResult(); // Result After Subtracting 20 is 80

    calc.Divide(0);
    calc.PrintResult(); // Result After Dividing 0 is 80

    calc.Multiply(3);
    calc.PrintResult(); // Result After Multiplying 3 is 240

    calc.clear();
    calc.PrintResult(); // Result After Clear 0 is 0

    return 0;
}


How to Build & Run

Prerequisites

C++ Compiler (g++, clang++, or MSVC)

Instructions

Clone the repository:

git clone https://github.com/AdamyoussefEg/simple-calculator-C-.git


Navigate into the directory:

cd simple-calculator-C-


Compile the code:

g++ Main.cpp -o calculator


Run the program:

Linux / macOS:

./calculator


Windows:

calculator.exe


