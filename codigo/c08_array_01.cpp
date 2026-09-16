#include <iostream>

using namespace std;

int main() {

    // Acceso a los elementos sin inicializar
    // INCORRECTO
    int sin_inicializar[5];
    for (int i = 0; i < 5; i++) {
        cout << sin_inicializar[i] << endl;
    }
    cout << "-----------\n";
    
    //Con inicializador
    int nums_1[5] = {2, 4, 6, 8, 10};
    for (int i = 0; i < 5; i++) {
        cout << nums_1[i] << endl;
    }
    cout << "-----------\n";
    
    //for basado en rango
    //for-each
    for (int num : nums_1)
        cout << num << endl;
    cout << "-----------\n";

    //Inicializador a valores por defecto
    // inicializa todos los elementos a 0
    int nums_2[5] = {};
    for (int num : nums_2)
        cout << num << endl;
    cout << "-----------\n";

    //Inicializa los 5 elementos. Los 3 finales a 0
    int nums_3[5] = {12, 45};
    for (int num : nums_3)
        cout << num << endl;
    cout << "-----------\n";
    
    //El tamaño lo infiere del inicializador
    // Equivale a int nums_4[2] = {12, 45};
    int nums_4[] = {12, 45};
    for (int num : nums_4)
        cout << num << endl;
    cout << "-----------\n";

    return 0;
}