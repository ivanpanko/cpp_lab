#include <iostream>
#include <cmath>

using namespace std;

// 1. Функція для обчислення інтеграла методом правих прямокутників
double integrate(double (*f)(double), double a, double b, int n) {
    double h = (b - a) / n; // Крок інтегрування
    double sum = 0.0;       // Сума прямокутників

    for (int i = 1; i <= n; i++) {
        double x = a + i * h; // Точка прямокутника (права межа)
        sum += f(x);          // Додаємо значення функції в цій точці
    }

    return h * sum; // Повертаємо обчислений інтеграл
}

// 2. Підінтегральні функції для Варіанта 6
double f1(double x) {
    return x * x * x + 1; // x^3 + 1
}

double f2(double x) {
    return cos(2 * x);    // cos(2x)
}

double f3(double x) {
    return 1.0 / (x + 2); // 1 / (x + 2)
}

int main() {
    int n = 1000; // Кількість розбиттів за умовою

    // Значення π (пі) для меж 2-ї функції
    double pi = 3.141592653589793;

    // Обчислення кожного з трьох інтегралів
    double I1 = integrate(f1, 0, 1, n);          // Межі [0; 1]
    double I2 = integrate(f2, 0, pi / 4.0, n);   // Межі [0; π/4]
    double I3 = integrate(f3, 0, 3, n);          // Межі [0; 3]

    // Загальна сума інтегралів
    double S = I1 + I2 + I3;

    // Виведення результатів
    cout << "I1 = " << I1 << endl;
    cout << "I2 = " << I2 << endl;
    cout << "I3 = " << I3 << endl;
    cout << "S  = " << S << endl;

    return 0;
}
