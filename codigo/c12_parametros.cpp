#include<iostream>
using namespace std;

void cambia_por_valor(int a) {
    a = 0;
}

void cambia_por_referencia(int& a) {
    a = 0;
}

int main() {
    int a = 999;
    cambia_por_valor(a);
    cout << "a en main: " << a << endl;

    a = 999;
    cambia_por_referencia(a);
    cout << "a en main: " << a << endl;



    return 0;
}