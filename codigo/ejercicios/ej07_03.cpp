#include<iostream>
using namespace std;

// Crear una función que reciba dos punteros a double y retorne un puntero 
// al mayor de los dos valores. En el main, 
// utilizar el puntero retornado para modificar el valor del mayor

double* mayor(double* a, double* b) {
    return *a >= *b ? a : b;
}


int main() {
    double num1, num2;
    cout << "Ingrese dos reales: ";
    cin >> num1 >> num2;

    double* ptr_mayor = mayor(&num1, &num2);

    cout << *ptr_mayor << endl;
    
    *ptr_mayor = 999;
    cout << *ptr_mayor << endl;
    
    cout << num1 << endl;
    cout << num2 << endl;

    return 0;
}