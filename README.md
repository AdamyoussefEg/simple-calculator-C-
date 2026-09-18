# 🧮 Simple C++ Calculator

A lightweight, object-oriented calculator implemented in **C++**. This project demonstrates fundamental **Object-Oriented Programming (OOP)** concepts such as encapsulation, state management, methods, and basic error handling.

## ✨ Features

* ➕ **Addition** — Add a value to the current result.
* ➖ **Subtraction** — Subtract a value from the current result.
* ✖️ **Multiplication** — Multiply the current result by a value.
* ➗ **Division** — Divide the current result by a value.
* 🛡️ **Division-by-Zero Protection** — Prevents invalid division operations without crashing.
* 📊 **State Tracking** — Maintains the current calculator result.
* 📝 **Action Tracking** — Keeps track of the last operation performed.
* 🔄 **Clear / Reset** — Resets the calculator result back to `0`.
* 🧱 **OOP Design** — Uses a dedicated calculator class to encapsulate functionality and state.

## 🛠️ Technologies

* **C++**
* **Object-Oriented Programming**
* **Standard C++ Library**
* **g++ / GCC**, **Clang**, or **MSVC**

## 📂 Project Structure

```text
simple-calculator-C-/
│
├── Main.cpp
├── clsCalculator.h
└── README.md
```

## 💻 Example Usage

```cpp
#include <iostream>
#include "clsCalculator.h"

int main()
{
    clsCalculator calc;

    calc.Add(100);
    calc.PrintResult();

    calc.Subtract(20);
    calc.PrintResult();

    calc.Divide(0);
    calc.PrintResult();

    calc.Multiply(3);
    calc.PrintResult();

    calc.clear();
    calc.PrintResult();

    return 0;
}
```

### Expected Output

```text
Result After Adding 100 is 100
Result After Subtracting 20 is 80
Result After Dividing 0 is 80
Result After Multiplying 3 is 240
Result After Clear 0 is 0
```

## 🧠 OOP Concepts Demonstrated

### Encapsulation

The calculator's internal state is managed through the `clsCalculator` class rather than directly modifying variables from `main()`.

### State Management

The calculator maintains a running result, allowing multiple operations to be performed sequentially.

For example:

```text
100 → -20 → ÷0 → ×3
```

Results in:

```text
100 → 80 → 80 → 240
```

### Error Handling

Division by zero is handled safely. When attempting:

```cpp
calc.Divide(0);
```

the calculator keeps the previous result instead of performing an invalid operation.

## 🚀 How to Build & Run

### Prerequisites

Make sure you have a C++ compiler installed:

* GCC / g++
* Clang
* Microsoft Visual C++ (MSVC)

### 1. Clone the Repository

```bash
git clone https://github.com/AdamyoussefEg/simple-calculator-C-.git
```

### 2. Navigate to the Project

```bash
cd simple-calculator-C-
```

### 3. Compile

Using **g++**:

```bash
g++ Main.cpp -o calculator
```

### 4. Run

#### Linux / macOS

```bash
./calculator
```

#### Windows

```bash
calculator.exe
```

## 📌 Example Workflow

The calculator supports chained operations:

```cpp
clsCalculator calc;

calc.Add(100);       // 100
calc.Subtract(20);   // 80
calc.Multiply(3);    // 240
calc.Divide(4);      // 60
```

The result is maintained automatically between operations.

## 🔮 Future Improvements

Possible extensions for the project include:

* [ ] Modulus operation
* [ ] Power operation
* [ ] Square root
* [ ] Operation history
* [ ] Interactive command-line interface
* [ ] Input validation
* [ ] Unit tests
* [ ] CMake build configuration
* [ ] More detailed error reporting

## 📄 License

This project is open-source and available for educational and personal use.

## 👨‍💻 Author

**AdamyoussefEg**

GitHub:
https://github.com/AdamyoussefEg
