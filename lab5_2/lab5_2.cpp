#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    double *a = new double;
    double *b = new double;
    double *c = new double;

    cout << "Vvedit try diysnykh chysla (a, b, c): ";
    cin >> *a >> *b >> *c;

    double *max_ab = new double(max(*a, *b));
    double *min_bc = new double(min(*b, *c));
    double *result = new double(*max_ab + pow(*min_bc, 2));

    cout << "Rezultat = " << *result << endl;

    delete a;
    delete b;
    delete c;
    delete max_ab;
    delete min_bc;
    delete result;

    return 0;
}
