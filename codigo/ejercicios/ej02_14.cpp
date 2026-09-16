#include <iostream>
using namespace std;

// Realizar un programa que adivine el número (entre 1 y 100) que ha pensado el usuario. 
// En cada paso, el programa propone un número y el usuario debe contestar, 
// introduciendo su contestación como dato, si ha acertado, 
// o bien si el número que ha propuesto el ordenador es mayor o es menor que el 
// que tenía pensado. 
// Por ejemplo, 
// ingresando: 0 –> Acierto 
// 1 –> El valor propuesto es mayor 
// -1 –> El valor propuesto es Menor

int main() {

    cout << "PIENSA UN NUMERO ENTRE 1 Y 100" << endl;
    cout << " 0 -> Acierto" << endl;
    cout << " 1 -> El valor propuesto es mayor" << endl;
    cout << "-1 -> El valor propuesto es Menor" << endl;

    int min = 1, max = 100;
    int num_propuesto, respuesta, cont = 0;
    bool he_adivinado = false;

    while (!he_adivinado) {
        num_propuesto = (min + max) / 2;
        cout << "Tu numero es el " << num_propuesto << "?: ";
        cin >> respuesta;
        cont++;

        switch (respuesta) {
            case 0:
                he_adivinado = true;
                break;
            case 1:
                max = num_propuesto;
                break;
            case -1:
                min = num_propuesto;
                break;
        }
    }

    cout << "He acertado en " << cont << " intentos." << endl;

    return 0;
}