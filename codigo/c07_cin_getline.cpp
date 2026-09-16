#include <iostream>
#include <string>

using namespace std;

int main() {

    int num, num2, num3;
    cout << "3 valores: ";
    cin >> num >> num2;
    cin >> num3;

    cout << "has ingresado: " << num << endl;
    cout << "has ingresado: " << num2 << endl;
    cout << "has ingresado: " << num3 << endl;

    string nombre;
    cout << "Ingresa tu nombre: ";
    // cin >> nombre;
    getline(cin >> ws, nombre);

    cout << "Hola " << nombre << endl;

    string frase;
    cout << "Ingresa frase: ";
    getline(cin >> ws, frase);

    cout << frase << endl;

    return 0;
}