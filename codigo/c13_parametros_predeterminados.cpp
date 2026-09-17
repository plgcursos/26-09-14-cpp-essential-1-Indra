#include<iostream>
using namespace std;

// Si creamos un prototipo, los valores predeterminados deben ir en el prototipo
void f(int num, char a = 'a', char b = 'b', char c = 'c');

int main() {
    f(999, 'Z', 'Z','Z');
    f(999, 'Z', 'Z');
    f(999, 'Z');
    f(999);
    return 0;
}

//Si hay prototipo no debe llevar los valores predeterminados en la definición
void f(int num, char a, char b, char c){
    cout << "num: " << num << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
}