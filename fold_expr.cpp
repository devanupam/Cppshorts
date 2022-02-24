#include <iostream>
template<typename ...T>
auto sum(const T&...t) {
    return(t+...);
}

int main() {
    std::cout << sum(4,5,6,6,7);
    std::cout << sum(4,5,6,6.2,7.3);
}