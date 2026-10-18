#include <iostream>
int main() {
    int f = 100;
    int c1 = (f - 32) * 5 / 9;
    int c2 = 5 / 9 * (f - 32);
    double c3 = (f - 32) * 5.0 / 9;
    std::cout << c1 << ' ' << c2 << ' ' << c3 << '\n';
}
