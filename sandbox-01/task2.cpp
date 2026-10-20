#include <iomanip>
#include <iostream>

void show(int tenths) {
    int total_seconds = tenths / 10;
    int hours = total_seconds / 3600;
    int minutes = (total_seconds % 3600) / 60;
    int seconds = total_seconds % 60;
    std::cout << hours << ':'
              << std::setfill('0') << std::setw(2) << minutes << ':'
              << std::setw(2) << seconds << '\n'
              << std::setfill(' ');
}

int main() {
    show(3600000);
    show(12345);
}