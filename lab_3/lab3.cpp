//Дано дійсне число \(a\) і натуральне число \(n\). Обчислити \(a^2(a+1)^2 \cdot \dots \cdot (a+n-1)^2\)
//Варіан 6

#include <iostream>

using namespace std;

int main() {
    double a;
    int n;

    cout << "Vvedit diysne chyslo a: ";
    cin >> a;
    cout << "Vvedit naturalne chyslo n: ";
    cin >> n;

    if (n <= 0) {
        cout << "Pomylka: n maye buty naturalnym chyslom (n > 0)." << endl;
        return 1;
    }

    double result = 1.0;
    
    for (int i = 0; i < n; i++) {
        double term = a + i;
        result *= (term * term);
    }

    cout << "Rezultat = " << result << endl;

    return 0;
}
