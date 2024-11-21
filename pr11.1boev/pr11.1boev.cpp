
#include <iostream>
#include "min_max_functions.h"
#include <cmath>  

int main() {
    setlocale(0, "ru");
    double a, b;

    std::cout << "Введите первое число (a): ";
    std::cin >> a;
    std::cout << "Введите второе число (b): ";
    std::cin >> b;

    double minimum = my_min(a, b);
    double maximum = my_max(a, b);

    double d = pow(minimum, 8);

    std::cout << "Минимальное значение: " << minimum << std::endl;
    std::cout << "Максимальное значение: " << maximum << std::endl;
    std::cout << "d = (min(a, b))^8 = " << d << std::endl;

    return 0;
}
