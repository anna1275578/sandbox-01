#include <cstdint>
#include <iostream>
int main() {
    std::uint8_t trip = 0;
    for (int km = 0; km < 300; ++km) {
        trip = (std::uint8_t)(trip + 1);
    }
    std::cout << (int)trip << '\n';

    int week = 1023;
    week = (week + 1) % 1024;
    std::cout << week << '\n';
}
