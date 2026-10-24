#include <iostream>

using namespace std;

int main() {
    double *a = new double;
    int *n = new int;

    cout << "Vvedit diysne chyslo a: ";
    cin >> *a;
    cout << "Vvedit naturalne chyslo n: ";
    cin >> *n;

    if (*n <= 0) {
        cout << "Pomylka: n maye buty naturalnym chyslom (n > 0)." << endl;
        delete a;
        delete n;
        return 1;
    }

    double *result = new double(1.0);
    double *term = new double;
    int *i = new int;
    
    for (*i = 0; *i < *n; (*i)++) {
        *term = *a + *i;
        *result *= (*term * *term);
    }

    cout << "Rezultat = " << *result << endl;

    delete a;
    delete n;
    delete result;
    delete term;
    delete i;

    return 0;
}
