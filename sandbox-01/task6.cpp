#include <iostream>
#include <cmath>

int main() {
    // 1. крапка з комою на місці
    int x = 5;
    std::cout << x << '\n';

    // 2. ініціалізована
    int x2 = 0;
    std::cout << x2 << '\n';

    // 3. ширший тип
    long long big = 2147483647;
    big = big + 1;
    std::cout << big << '\n';

    // 4. останній дозволений індекс
    int a[3] = {1, 2, 3};
    int i = 2;
    std::cout << a[i] << '\n';

    // 5. тип, у який 300 влазить
    int c = 300;
    std::cout << c << '\n';

    // 6. порівняння з допуском
    double d = 0.1 + 0.2;
    if (std::fabs(d - 0.3) < 1e-9) {
        std::cout << "equal" << '\n';
    } else {
        std::cout << "not equal" << '\n';
    }
}