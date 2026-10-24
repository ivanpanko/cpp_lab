#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Vvedit rozmir masyvu n (n <= 300): ";
    cin >> n;

    // Перевірка обмеження n <= 300
    if (n <= 0 || n > 300) {
        cout << "Pomylka: n maye buty vid 1 do 300." << endl;
        return 1;
    }

    int A[300];
    cout << "Vvedit elementu masyvu: ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    // Перевірка на впорядкованість за зростанням[cite: 3]
    bool is_sorted = true;
    for (int i = 0; i < n - 1; i++) {
        if (A[i] > A[i + 1]) {
            is_sorted = false;
            break;
        }
    }

    if (is_sorted) {
        // Якщо упорядкований - обчислюємо суму[cite: 3]
        long long sum = 0; 
        for (int i = 0; i < n; i++) {
            sum += A[i];
        }
        cout << "Masyv uporyadkovanyy. Suma = " << sum << endl;
    } else {
        // Якщо не упорядкований - обчислюємо добуток[cite: 3]
        long long product = 1; 
        for (int i = 0; i < n; i++) {
            product *= A[i];
        }
        cout << "Masyv ne uporyadkovanyy. Dobutok = " << product << endl;
    }

    return 0;
}
