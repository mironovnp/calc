#include "rpn.cpp"
#include <iostream>
#include <locale>
int main() {
    double history[5]={};
    while (true) {
        double a,b;
        char opr, ans;
        std::cout << "Хотите ли вы использовать историю? Ответ y или n: ";
        std::cin >> ans;
        if (ans=='n') {
            std::cout << "Введите первое число: ";
            std::cin >> a;
            std::cout << "Введите оператор: ";
            std::cin >> opr;
            std::cout << "Введите второе число: ";
            std::cin >> b;
        } else {
            for(int i = 0; i < 5; i++) {
                std::cout << history[i] << ' ';
            }
            std::cout << "Введите первое число: ";
            std::cin >> a;
            std::cout << "Введите оператор: ";
            std::cin >> opr;
            std::cout << "Введите второе число: ";
            std::cin >> b;
        }


        try {
            std::cout << "Ответ: " << operation(a,b,opr) << "\n\n";
            for (int i = 4; i > 0; i--) {
                history[i] = history[i - 1];
            }
            history[0]=operation(a,b,opr);
        } catch (const std::exception& e) {
            std::cout << "Ошибка: " << e.what() << std::endl;
        }
    }
    return 0;
}
