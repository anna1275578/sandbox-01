#include <cstdint>
#include <iostream>

std::int16_t saturate(int v) {
    if (v > 32767) return 32767;
    if (v < -32768) return -32768;
    return (std::int16_t)v;
}

int main() {
    // Зміни одне: uint16_t замість int16_t
    int speeds[] = {30000, 32767, 32768, 40000, 65536};
    for (int i = 0; i < 5; ++i) {
        std::uint16_t stored = (std::uint16_t)speeds[i];
        std::cout << speeds[i] << " -> " << stored << '\n';
    }

    // saturate
    std::cout << saturate(40000) << '\n';
    std::cout << saturate(-40000) << '\n';
    std::cout << saturate(100) << '\n';
}