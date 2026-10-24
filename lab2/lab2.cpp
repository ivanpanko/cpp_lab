//Дано три дійсних числа: \(a, b, c\). Знайти \(\max(a,b) + (\min(b,c))^2\)
//Варіант 6
#include <iostream>
#include <cmath>

#include <iostream>
#include <cmath>
#include <algorithm> // для функцій max та min

using namespace std;

int main() {
    double a, b, c;
    cout << "Vvedit try diysnykh chysla (a, b, c): ";
    cin >> a >> b >> c;

    
    double max_ab = max(a, b);
    
    
    double min_bc = min(b, c);
    
    
    double result = max_ab + pow(min_bc, 2);

    cout << "Rezultat = " << result << endl;

    return 0;
}
