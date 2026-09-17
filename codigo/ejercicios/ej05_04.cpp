#include<iostream>
#include<array>
#include<span>
using namespace std;

// Desarrollar una función que reciba un array numérico de dos dimensiones y retorne 
// la suma de cada fila.

template<typename T, size_t COLS>
void muestra(span<array<T, COLS>> m) { //muestra(span<array<...>>)
    for (int i = 0; i < m.size(); i++) {
        for (int j = 0; j < COLS; j++) {
            cout << m[i][j] << "\t";
        }
        cout << endl;
    }
}

template<typename T>
void muestra(span<T> v) {//muestra(span<T>)
    cout << "[";
    for (int i = 0; i < v.size() - 1; i++) {
        cout << v[i] << ", ";
    }
    cout << v[v.size() - 1] << "]" << endl;
}

template<typename T, size_t FILAS, size_t COLS>
array<T, FILAS> suma_filas(span<array<T, COLS>, FILAS> m) {
    array<T, FILAS> resu{};

    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLS; j++){
            resu[i] += m[i][j];
        }
    }
    return resu;
}

int main() {
    array<array<int, 3>, 3> m1{{
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    }};
    muestra<int, 3>(m1);
    auto suma1 = suma_filas<int, 3, 3>(m1);
    muestra<int>(suma1);
    cout << endl;
    
    array<array<double, 4>, 2> m2{{
        {1.5,2.,3.,4.},
        {5.,6.77,7.,8.}
    }};
    muestra<double, 4>(m2);
    auto suma2 = suma_filas<double, 2, 4>(m2);
    muestra<double>(suma2);
    cout << endl;
    
    array<array<float, 2>, 4> m3{{
        {1.7F, 3.F},
        {4.F, 5.55F},
        {6.F, 7.F},
        {8.F, 9.F}
    }};
    muestra<float, 2>(m3);
    auto suma3 = suma_filas<float, 4, 2>(m3);
    muestra<float>(suma3);
    
    return 0;
}
