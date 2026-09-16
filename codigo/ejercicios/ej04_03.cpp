#include <iostream>

using std::cout;
using std::endl;

void muestra_array(const int v[], int cant) {
    cout << "[";
    for (int i = 0; i < cant - 1; i++) {
        cout << v[i] << ", ";
    }
    cout << v[cant - 1] << "]" << endl;
}
// Desarrollar un algoritmo que a partir de un array de enteros cree otro 
//  con los elementos ordenados exactamente al revés que el original.
int main() {

    const int CANT = 5;
    int v1[CANT] = {25, 32, -1567, 8, 9999};
    int inv[CANT];

    for (int i = 0; i < CANT; i++) {
        inv[CANT - i - 1] = v1[i];
    }
    muestra_array(v1, CANT);
    muestra_array(inv, CANT);

    return 0;
}

