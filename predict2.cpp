#include <iostream>
int main() {
    float seconds = 0.0f;
    for (int tick = 0; tick < 3600000; ++tick) {
        seconds = seconds + 0.1f;
    }
    std::cout << seconds << '\n';

    int tenths = 0;
    for (int tick = 0; tick < 3600000; ++tick) {
        tenths = tenths + 1;
    }
    std::cout << tenths / 10.0 << '\n';
}
