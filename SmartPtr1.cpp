#include <iostream>
#include <memory>

struct A {
    int a;
};

int main() {
    auto objA = std::make_unique<A>();
    objA->a = 10;
}