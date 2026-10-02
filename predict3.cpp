#include <iostream>
int main() {
    char word[] = "HAL";
    for (int i = 0; word[i] != '\0'; ++i) {
        word[i] = (char)(word[i] + 1);
    }
    std::cout << word << '\n';
    std::cout << 'a' - 'A' << '\n';
}
