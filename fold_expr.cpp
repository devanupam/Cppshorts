#include <iostream>

// Shows how Cpp17 fold feature works

// and this adds up values repeatedly (a + (b + (c + d))) + ...
template<typename ...T>
auto sumL(const T&...t) {
    return(t + ...);
}

//It adds up values repeatedly ((a + b) + c) + d) + ...
auto sumR(const T&...t) {
    return(... + t);
}

int main() {
    std::cout << sum(4,5,6,6,7);
    std::cout << sum(4,5,6,6.2,7.3);
}
