#include <iostream>

// using namespace std;
using std::cout;
using std::endl;

// Desarrollar una función que muestre por pantalla un array de enteros de la 
// siguiente forma: [25, 32, -1567, 8]

void muestra_array(const int v[], int cant) {
    cout << "[";
    for (int i = 0; i < cant - 1; i++) {
        cout << v[i] << ", ";
    }
    cout << v[cant - 1] << "]" << endl;
    // v[0] = 9999;
}

int main() {

    int v1[] = {25, 32, -1567, 8};
    int v2[] = {1,2,3,4,5,6,7,8};

    muestra_array(v1, 4);
    cout << endl;
    muestra_array(v2, 8);

    cout << v1[0];
    return 0;
}

