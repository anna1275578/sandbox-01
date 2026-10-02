#include <cstdint>
#include <iostream>
int main() {
    std::uint8_t trip = 0;
    trip = (std::uint8_t)(trip - 1);
    std::cout << (int)trip << '\n';
}
