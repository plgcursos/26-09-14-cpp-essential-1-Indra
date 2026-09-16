#include <iostream>

using namespace std;

int main() {

    int num1 = 0;
    int num2 = 0;

    cout << ++num1 << endl; // muestra 1
    cout << num2++ << endl; // muestra 0 y luego incrementa
   
    cout << num1 << endl;
    cout << num2 << endl;
    
    int resu1 = ++num1 * 3; // resu1 vale 6
    int resu2 = num2++ * 3; // resu2 vale 3 (1 * 3) y luego incrementa num2++

    cout << resu1 << endl; 
    cout << resu2 << endl;


    return 0;
}