#include<iostream>
using namespace std;

// Realizar una función para validar un DNI. Recibe como parámetro un String que contiene
// un número de DNI con su letra.
// Para validarlo se debe calcular la letra a partir del número. El resto de dividir el número por
// 23, se obtendrá un valor entre 0 y 22 y esto números se asocian a una letra.
// 0 T 6 Y 12 N 18 H
// 1 R 7 F 13 J 19 L
// 2 W 8 P 14 Z 20 C
// 3 A 9 D 15 S 21 K
// 4 G 10 X 16 Q 22 E
// 5 M 11 B 17 V

bool es_dni_valido(int dni, char letra) {
    char letras[] = {
        'T', 'R', 'W', 'A', 'G', 'M', 
        'Y', 'F', 'P', 'D', 'X', 'B', 
        'N', 'J', 'Z', 'S', 'Q', 'V', 
        'H', 'L', 'C', 'K', 'E'};

    return letra == letras[dni % 23] || letra == letras[dni % 23] + 32;
}

int main() {

    cout << es_dni_valido(12345678, 'z') << endl;
    cout << es_dni_valido(87654321, 'X') << endl;
    cout << es_dni_valido(45678912, 's') << endl;
    cout << es_dni_valido(78912345, 'N') << endl;

    cout << es_dni_valido(78912345, 'J') << endl;
    cout << es_dni_valido(78912344, 'N') << endl;

    return 0;
}