#include <iostream>
#include <array>
#include <span>

using namespace std;
// Repetir la función, pero para un array de 10 elementos (el primero recibido) y 
// otro de menor o igual tamaño. Utilizar span.

void muestra_array(span<double> v) {
    cout << "[";
    for (int i = 0; i < v.size() - 1; i++) {
        cout << v[i] << ", ";
    }
    cout << v[v.size() - 1] << "]" << endl;
}

array<double, 10> suma_array(span<double, 10> v1, span<double> v2) {
    array<double, 10> resu;
    for (int i = 0; i < v2.size(); i++)
        resu[i] = v1[i] + v2[i];

    for (int i = v2.size(); i < resu.size(); i++)
        resu[i] = v1[i];
    
    return resu;
}

int main() {

    array<double, 10> v_1{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // array<double, 10> v_2{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    array<double, 3> v_2{11, 12, 13};
    auto suma = suma_array(v_1, v_2);

    muestra_array(v_1);
    muestra_array(v_2);
    muestra_array(suma);

    return 0;
}

