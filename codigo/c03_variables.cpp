#include <iostream>

using namespace std;

int main() {

    int edad; //Declarado (creado) pero sin inicializar. No usar en modo right-value antes de inicializar
    // edad = 30;

    //Inicialización por copia
    int cant_alumnos = 5;

    //Inicialización directa
    int grupo(17);

    //Inicialización uniforme
    int anyo{2026};

    //Inicialización vacío
    int cont{};

    cout << "int edad; " << edad << endl;
    cout << "int cant_alumnos = 5; " << cant_alumnos << endl;
    cout << "int grupo(17); " << grupo << endl;
    cout << "int anyo{2026}; " << anyo << endl;
    cout << "int cont{}; " << cont << endl;

    return 0;
}