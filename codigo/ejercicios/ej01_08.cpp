#include <iostream>
using namespace std;

// Dados tres números, indicar el mayor y el menor valor de los tres.
int main() {
    int num1, num2, num3, mayor;
    
    cout << "Ingrese 3 numeros enteros: ";
    cin >> num1 >> num2 >> num3;

    mayor = num1;
    if (num2 > mayor)
        mayor = num2;
    if (num3 > mayor)
        mayor = num3;

    cout << "El mayor es " << mayor << endl;

    return 0;
}