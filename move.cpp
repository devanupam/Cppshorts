
#include <utility>

struct Car
{
    int a;
    Car() {}
};

template <class T>
void swap(T& a, T& b) {
    T tmp(std::move(a));
    a = std::move(b);   
    b = std::move(tmp);
}

int main() {
    Car merc, bmw;
    merc.a = 50;
    bmw.a = 100;

    std::pair p = {"M", 34};

    swap(merc, bmw);
}