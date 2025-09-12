#include <stdexcept>
double operation(double a, double b, char opr) {
    double res;
    switch (opr) {
        case '+':
            res = a + b;
            break;
        case '-':
            res = a - b;
            break;
        case '*':
            res = a * b;
            break;
        case '/':
            if (b == 0) throw std::invalid_argument("Деление на 0");
            res = a / b;
            break;
        default:
            throw std::invalid_argument("Неизвестный оператор");

    }
    return res;
}
