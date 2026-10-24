#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

// Функція для обчислення f(x) відповідно до заданих умов[cite: 4]
double f(double x) {
    if (x < 0) {
        // Ряд: 1 + x/1! + x^2/2! + ... + x^8/8![cite: 4]
        double sum = 1.0;
        double term = 1.0;
        for (int i = 1; i <= 8; i++) {
            term *= x / i; // Наступний член ряду
            sum += term;
        }
        return sum;
    } else if (x >= 0 && x <= 5) {
        // Формула: 15 + sqrt(cos^6(x))[cite: 4]
        return 15.0 + sqrt(pow(cos(x), 6));
    } else {
        // Формула: min{1, 2 * sin(x)}[cite: 4]
        return min(1.0, 2.0 * sin(x));
    }
}

int main() {
    double a, b;
    cout << "Vvedit diysni chysla a ta b: ";
    cin >> a >> b;

    // Обчислення значень функції для a, b та 3
    double fa = f(a);
    double fb = f(b);
    double f3 = f(3.0); // 3 потрапляє у проміжок 0 <= x <= 5[cite: 4]

    // Обчислення фінального результату u[cite: 4]
    double u = max(fa, fb) - f3;

    cout << "Rezultat u = " << u << endl;

    return 0;
}
