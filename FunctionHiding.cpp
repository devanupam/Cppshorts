
#include <iostream>

class Base
{
private:
    /* data */
public:
    void fun() { std::cout << "Base"; }
};


class Derived : public Base
{
private:
    using Base::fun;
    /* data */
public:
    void fun(int i) { std::cout << "Der"; }
};

int main() {
    Derived d;
    d.fun();
}
