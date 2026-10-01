#include <stdexcept>

class Math {
public:
    static double add(double a, double b) {
        return a + b;
    }

    static double subtract(double a, double b) {
        return a - b;
    }

    static double multiply(double a, double b) {
        return a * b;
    }

    static double divide(double a, double b) {
        if (b == 0.0) {
            throw std::invalid_argument("Cannot divide by zero");
        }
        return a / b;
    }

    static double divide(double a, int b) {
        if (b == 0) {
            throw std::invalid_argument("Cannot divide by zero");
        }
        return a / static_cast<double>(b);
    }
};
