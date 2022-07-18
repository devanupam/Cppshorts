//Convert user defined types to built-in types and usage of function call operator

#include <iostream>

class Bar
{
private:
    int n;
public:
    Bar(int n) : n(n) { std::cout << "Constructor\n"; };
    operator int() {
        std::cout << "Conversion operator\n";
        return n;
    }

    int operator()() {
        std::cout << "Function call operator\n";
        return 30;
    }
};

int main() {
    Bar b = 20;
    
    int j = b(); // Calls function call operator function
    int k = b; // Calls Conversion operator function
}
