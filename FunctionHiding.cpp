// Function hiding - if a derived class redefines the base class member method then all the base class methods with the same name become hidden in the derived class.

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
     
    /* data */
public:
    using Base::fun; // To mitigate function hiding
    void fun(int i) { std::cout << "Derived"; }
};

int main() {
    Derived d;
    d.fun();
}
