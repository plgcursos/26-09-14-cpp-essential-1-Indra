#include <iostream>
#include <array>

using namespace std;

int main() {

    array<int, 5> primos{2, 3, 5, 7, 11};
    for (int primo : primos)
        cout << primo << endl;
    cout << "--------------" << endl;

    for (int i = 0; i < primos.size(); i++)
        cout << primos.at(i) << endl;
    cout << "--------------" << endl;
    // cout << primos[10] << endl;

    //Incialización a 0
    array<double, 5> reales{};
    for (int real : reales)
        cout << real << endl;
    cout << "--------------" << endl;

    // Inicializar todos los elementos a un valor
    // fill(...)
    reales.fill(99);
    for (int real : reales)
        cout << real << endl;
    cout << "--------------" << endl;

    //copiar un array
    auto nuevo = reales;
    for (int num : nuevo)
        cout << num << endl;
    cout << "--------------" << endl;

    nuevo.at(1) = 555;
    for (int num : nuevo)
        cout << num << endl;
    cout << "--------------" << endl;
    for (int real : reales)
        cout << real << endl;
    cout << "--------------" << endl;

    //Acceder al primer y ultimo elemento
    cout << primos.front() << endl;
    cout << primos.back() << endl;
    return 0;
}