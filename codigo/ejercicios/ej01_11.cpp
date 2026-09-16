#include <iostream>
using namespace std;

// Hacer un algoritmo que permita Obtener la cantidad de horas, minutos y segundos 
// de un tiempo dado en segundos.
int main() {
    int tot_segundos, segundos, minutos, horas;
    cout << "Ingresa segundos: ";
    cin >> tot_segundos;

    horas = tot_segundos / 3600;
    minutos = (tot_segundos % 3600) /60;
    segundos = tot_segundos % 60;
    
    cout << tot_segundos << " segundos son " 
            << horas << ":" << minutos << ":" << segundos << endl;
    return 0;
}