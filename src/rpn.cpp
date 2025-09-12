#include <stdexcept>
#include <cmath>
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
        case '^':
            res = pow(a,b);
        default:
            throw std::invalid_argument("Неизвестный оператор");

    }
    return res;
}
