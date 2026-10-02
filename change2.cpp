#include <iomanip>
#include <iostream>
int main() {
    double seconds = 0.0;
    for (int tick = 0; tick < 3600000; ++tick) {
        seconds = seconds + 0.1;
    }
    std::cout << seconds << '\n';
    std::cout << std::setprecision(15) << seconds << '\n';

    int tenths = 0;
    for (int tick = 0; tick < 3600000; ++tick) {
        tenths = tenths + 1;
    }
    std::cout << tenths / 10.0 << '\n';
}
