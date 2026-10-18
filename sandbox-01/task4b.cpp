#include <cmath>
#include <iostream>

int celsius(int f) {
    double exact = (f - 32) * 5.0 / 9;
    return (int)std::lround(exact);
}

int main() {
    std::cout << celsius(100) << '\n';
    std::cout << celsius(0) << '\n';
    std::cout << celsius(212) << '\n';
}