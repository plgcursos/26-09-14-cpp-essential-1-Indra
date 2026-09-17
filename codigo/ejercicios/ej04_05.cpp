#include <iostream>
#include <array>

using namespace std;
// Desarrollar una función que reciba, dos arrays de doubles de 5 elementos y 
// retorne un nuevo array con la suma de los elementos que están en la misma posición.

// v se recibe por valor, es decir, recibe una copia del array original
// Es seguro pero puede afectar al rendimiento dependiendo del tamaño
// void muestra_array(array<double, 5> v) {

// La forma mas correcta de pasar un objeto es por referencia y constante si no se necesta
// modificar en la función
void muestra_array(const array<double, 5>& v) {
    cout << "[";
    for (int i = 0; i < v.size() - 1; i++) {
        cout << v.at(i) << ", ";
    }
    cout << v.at(v.size() - 1) << "]" << endl;
    //v.at(0) = 9999; // No modifica el original ya que lo recibe por valor
}

//
array<double, 5> suma_array(array<double, 5> v1, array<double, 5> v2) {
    array<double, 5> resu;
    for (int i = 0; i < resu.size(); i++)
        resu.at(i) = v1.at(i) + v2.at(i);

    return resu;
}

int main() {

    array<double, 5> v_1{1, 2, 3, 4, 5};
    array<double, 5> v_2{11, 12, 13, 14, 15};
    auto suma = suma_array(v_1, v_2);

    muestra_array(v_1);
    muestra_array(v_2);
    muestra_array(suma);
    
    cout << v_1.at(0);

    return 0;
}

