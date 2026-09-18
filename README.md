# 🧮 Simple C++ Calculator

A simple and lightweight **C++ Calculator** built using **Object-Oriented Programming (OOP)** concepts.

The project provides basic arithmetic operations while maintaining the calculator's current value and the last performed action.

## ✨ Features

* ➕ **Addition** — Adds a number to the current result.
* ➖ **Subtraction** — Subtracts a number from the current result.
* ✖️ **Multiplication** — Multiplies the current result by a number.
* ➗ **Division** — Divides the current result by a number.
* 🛡️ **Division by Zero Protection** — Prevents the program from crashing when dividing by zero.
* 🔄 **Clear** — Resets the calculator value to `0`.
* 📊 **Result Tracking** — Displays the current result after every operation.
* 🧱 **OOP Design** — Calculator functionality is organized inside the `clsCalculator` class.

## 🛠️ Technologies

* **C++**
* **Object-Oriented Programming (OOP)**
* **C++ Standard Library**
* **g++ / GCC**

## 📂 Project Structure

```text
simple-calculator-C-/
│
├── Main.cpp
└── README.md
```

## 💻 Source Code

The calculator is implemented using the `clsCalculator` class.

The class maintains:

* `Number` — Stores the current calculator value.
* `result` — Stores the description of the last performed action.

Both variables are private, demonstrating **encapsulation**.

The available operations are:

```cpp
Add(int N2)
Subtract(int N2)
Divide(int N2)
Multiply(int N2)
clear()
PrintResult()
```

## 🚀 Example

The current `main()` function demonstrates a sequence of calculator operations:

```cpp
int main() {
    clsCalculator Calculator1;

    Calculator1.Add(10);
    Calculator1.PrintResult();

    Calculator1.Add(100);
    Calculator1.PrintResult();

    Calculator1.Subtract(20);
    Calculator1.PrintResult();

    Calculator1.Divide(0);
    Calculator1.PrintResult();

    Calculator1.Divide(2);
    Calculator1.PrintResult();

    Calculator1.Multiply(3);
    Calculator1.PrintResult();

    Calculator1.clear();
    Calculator1.PrintResult();

    return 0;
}
```

## 📊 Expected Output

```text
Result After Adding 10 is 10
Result After Adding 100 is 110
Result After Subtracting 20 is 90
Result After Dividing 0 is 90
Result After Dividing 2 is 45
Result After Multiplying 3 is 135
Result After Clear 0 is 0
```

The sequence above follows the operations currently implemented in `Main.cpp`.

## 🧠 OOP Concepts

### Encapsulation

The calculator's internal variables are declared as `private`, while operations are exposed through `public` methods. This keeps the calculator's internal state controlled by the class.

### State Management

The calculator maintains a running value in the `Number` variable. Each operation changes this value based on the previous result.

For example:

```text
10
↓
+ 100
↓
110
↓
- 20
↓
90
↓
÷ 2
↓
45
↓
× 3
↓
135
```

### Error Handling

The `Divide()` method checks whether the provided number is `0`. This prevents an actual division-by-zero operation.

### Resetting State

The `clear()` method resets the calculator's value to `0` and resets the action message.

## 🔧 How to Build & Run

### Prerequisites

You need a C++ compiler installed on your computer.

Supported compilers include:

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

### 3. Compile the Program

Using `g++`:

```bash
g++ Main.cpp -o calculator
```

### 4. Run the Program

#### Windows

```bash
calculator.exe
```

#### Linux / macOS

```bash
./calculator
```

## 📌 Project Purpose

This project was created to practice fundamental **C++ Object-Oriented Programming concepts**, including:

* Classes
* Objects
* Encapsulation
* Private and public members
* Member functions
* State management
* Basic error handling


## 👨‍💻 Author

**Adamyoussef**

GitHub: [AdamyoussefEg](https://github.com/AdamyoussefEg)

## 📄 License

This project is available for educational and personal use.
