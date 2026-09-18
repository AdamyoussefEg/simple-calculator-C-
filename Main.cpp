#include <iostream>
#include <string>

using namespace std;

class clsCalculator{
    private:
        int Number;
        string result = "Clear 0";

    public:

        void clear(){
            Number = 0;
            result = "Clear 0";
        }

        void Add(int N2){
            Number += N2;
            result = "Adding " + to_string(N2);
        }

        void Subtract(int N2){
            Number -= N2;
            result = "Subtracting " + to_string(N2);
        }

        void Divide(int N2){
            if (N2 == 0){
                Number /= 1;
            } else {
                Number /= N2;
            }

            result = "Dividing " + to_string(N2);
        }

        void Multiply(int N2){
            Number *= N2;
            result = "Multiplying " + to_string(N2);
        }

        void PrintResult(){
            cout << "Result After " << result << " is "<< Number <<" \n";
        }
};

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