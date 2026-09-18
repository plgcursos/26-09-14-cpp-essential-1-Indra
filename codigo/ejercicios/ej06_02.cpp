#include<iostream>
#include<cmath>
using namespace std;

// Definir una estructura Punto, que represente un punto el plano, con las coordenadas x e y. 
// Crear funciones para leer un punto, mostrarlo y calcular la distancia entre dos puntos. 
// Ej: A(0, 0) y B(3, 4) están a distancia 5.

struct Punto{
    double x, y;
};

Punto leer() {
    Punto p;
    cout << "Ingrese coordenadas del punto: ";
    cin >> p.x >> p.y;
    return p;
}

void mostrar(const Punto& p) {
    cout << "(" << p.x << ", " << p.y << ")" << endl;
}

double distancia(const Punto& p1, const Punto& p2) {
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

int main() {
    cout << "Punto A" << endl;
    Punto a = leer();

    cout << "Punto B" << endl;
    Punto b = leer();

    mostrar(a);
    mostrar(b);

    double dist = distancia(a, b);
    cout << "Distancia: " << dist << endl;
    

    return 0;
}