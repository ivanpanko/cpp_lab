#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double *d = new double;
    cout << "Vvedit dovzhynu diagonali kvadrata: ";
    cin >> *d;

    if (*d <= 0) {
        cout << "Pomylka: dovzhyna maye buty bilshoyu za nul." << endl;
        delete d;
        return 1;
    }

    double *a = new double(*d / sqrt(2));
    double *area = new double(*a * *a);
    double *perimeter = new double(4 * *a);

    cout << "Ploshcha kvadrata = " << *area << endl;
    cout << "Perymetr kvadrata = " << *perimeter << endl;

    delete d;
    delete a;
    delete area;
    delete perimeter;

    return 0;
}
