#include <cstdint>
#include <iostream>
int main() {
    int speeds[] = {30000, 32767, 32768, 40000, 65536};
    for (int i = 0; i < 5; ++i) {
        std::int16_t stored = (std::int16_t)speeds[i];
        std::cout << speeds[i] << " -> " << stored << '\n';
    }
}