#include <stdexcept>
#include <cmath>
#include <string>
double operation(double a, double b, std::string opr) {
    double res;
    if (opr == "+") {
        res = a + b;
    } else if (opr == "-") {
        res = a - b;
    } else if (opr == "*") {
        res = a * b;
    } else if (opr == "/") {
        if (b == 0) throw std::invalid_argument("Деление на 0");
        res = a / b;
    } else if (opr == "^") {
           res = pow(a, b);
    } else {
        throw std::invalid_argument("Неизвестный оператор");
    }

    return res;
}
