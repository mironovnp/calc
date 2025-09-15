#include "rpn.cpp"
#include <iostream>
#include <locale>
#include <string>
int main() {
    double history[5]={};
    double a,b;
    char ans, cont_check;
    std::string opr;
    std::string operators[] = {"+", "-", "*", "/"};
    cont_check = 'y';
    while (cont_check == 'y') {
        std::cout << "Хотите ли вы использовать историю? Ответ y или n: ";
        std::cin >> ans;
        while (ans!='n' && ans !='y') {
            std::cout << "Ошибка ввода. Пожалуйста, введите подходящее действие: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cin >> ans;
        }
        if (ans=='n') {
            std::cout << "Введите первое число: ";
            while (!(std::cin >> a)) {
                std::cout << "Не число, введите число: ";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
            std::cout << "Введите оператор: ";
            std::cin >> opr;
            std::cout << "Введите второе число: ";
            while (!(std::cin >> b)) {
                std::cout << "Не число, введите число: ";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
        }
        if (ans == 'y') {
            for(int i = 0; i < 5; i++) {
                std::cout << history[i] << ' ';
            }
            std::cout << "Введите первое число: ";
            while (!(std::cin >> a)) {
                std::cout << "Не число, введите число: ";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
            std::cout << "Введите оператор: ";
            std::cin >> opr;
            std::cout << "Введите второе число: ";
            while (!(std::cin >> b)) {
                std::cout << "Не число, введите число: ";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
        }
        try {
            std::cout << "Ответ: " << operation(a,b,opr) << "\n";
            for (int i = 4; i > 0; i--) {
                history[i] = history[i - 1];
            }
            history[0]=operation(a,b,opr);
        }
        catch (const std::exception& e) {
            std::cout << "Ошибка: " << e.what() << std::endl;
        }
        std::cout << "Продолжить? Ответ y или n: ";
            std::cin >> cont_check;
            while (ans!='n' && ans !='y') {
                std::cout << "Ошибка ввода. Пожалуйста, введите подходящее действие: ";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cin >> ans;
            }
    }
    std::cout << "\n";
    return 0;
}
