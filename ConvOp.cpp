
#include <iostream>

class Bar
{
private:
    int n;
public:
    Bar(int n) : n(n) { std::cout << "Constructor\n"; };
    operator int() {
        std::cout << "Conv operator\n";
        return n;
    }

    int operator()() {
        std::cout << "function call op\n";
        return 30;
    }
};

int main() {
    Bar b = 20;
    int j = b();
}