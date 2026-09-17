#include <iostream>
#include <array>
#include <span>

using namespace std;
// Desarrollar una función que reciba un array de doubles y, en el mismo array, intercambie
// los elementos en espejo, es decir, el primero por el último, el segundo por el penúltimo y
// así sucesivamente.

void muestra_array(span<double> v) {
    cout << "[";
    for (int i = 0; i < v.size() - 1; i++) {
        cout << v[i] << ", ";
    }
    cout << v[v.size() - 1] << "]" << endl;
}

void intercambia(span<double> v) {
    double aux;
    for (int i = 0; i < v.size() / 2; i++) {
        // v[i] <-> v[v.size() - 1 - i]
        swap(v[i], v[v.size() - 1 - i]);

        // aux = v[i];
        // v[i] = v[v.size() - 1 - i];
        // v[v.size() - 1 - i] = aux;
    }
}

int main() {

    array<double, 10> v_1{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    muestra_array(v_1);
    intercambia(v_1);
    muestra_array(v_1);

    return 0;
}

