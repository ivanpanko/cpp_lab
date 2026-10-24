//Варіант 2: Використання контейнера std::vector

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Vvedit rozmir masyvu n (n <= 300): ";
    cin >> n;

    if (n <= 0 || n > 300) {
        cout << "Pomylka: n maye buty vid 1 do 300." << endl;
        return 1;
    }

    // Створення вектора заданого розміру
    vector<int> A(n);

    cout << "Vvedit elementu masyvu: ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    bool is_sorted = true;
    for (int i = 0; i < n - 1; i++) {
        if (A[i] > A[i + 1]) {
            is_sorted = false;
            break;
        }
    }

    if (is_sorted) {
        long long sum = 0; 
        for (int i = 0; i < n; i++) {
            sum += A[i];
        }
        cout << "Masyv uporyadkovanyy. Suma = " << sum << endl;
    } else {
        long long product = 1; 
        for (int i = 0; i < n; i++) {
            product *= A[i];
        }
        cout << "Masyv ne uporyadkovanyy. Dobutok = " << product << endl;
    }

    return 0;
}
