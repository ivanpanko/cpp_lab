//Обчислити площу та периметр квадрата, якщо задано довжину діагоналі цього квадрата.
//Варіант 6
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double d;
    cout << "Vvedit dovzhynu diagonali kvadrata: ";
    cin >> d;

    if (d <= 0) {
        cout << "Pomylka: dovzhyna maye buty bilshoyu za nul." << endl;
        return 1;
    }

    double a = d / sqrt(2);
    double area = a * a;
    double perimeter = 4 * a;

    cout << "Ploshcha kvadrata = " << area << endl;
    cout << "Perymetr kvadrata = " << perimeter << endl;

    return 0;
}
