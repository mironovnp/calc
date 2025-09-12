#include "rpn.cpp"
#include <iostream>
#include <locale>
int main() {
    double a,b;
    char opr;
    std::cout << "Введите первое число ";
    std::cin >> a;
    std::cout << "Введите второе число ";
    std::cin >> b;
    std::cout << "Введите оператор ";
    std::cin >> opr;
    try {
        std::cout << operation(a,b,opr) << "\n\n";
    } catch (const std::exception& e) {
        std::cout << "Ошибка: " << e.what() << std::endl;
    }
    return 0;
}
