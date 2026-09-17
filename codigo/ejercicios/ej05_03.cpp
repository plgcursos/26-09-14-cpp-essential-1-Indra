#include<iostream>
#include<array>
#include<span>
using namespace std;

template<typename T, size_t COLS>
void muestra(span<array<T, COLS>> m) {
    for (int i = 0; i < m.size(); i++) {
        for (int j = 0; j < COLS; j++) {
            cout << m[i][j] << "\t";
        }
        cout << endl;
    }
}

template<typename T, size_t FILAS, size_t COLS>
T traza(span<array<T, COLS>, FILAS> m) {
    T traza = 0;
    size_t min = FILAS <= COLS ? FILAS : COLS;
    for (int i = 0; i < min; i++) {
        traza += m[i][i];
    }
    return traza;
}

int main() {
    array<array<int, 3>, 3> m1{{
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    }};
    muestra<int, 3>(m1);
    cout << "Traza: " << traza<int, 3, 3>(m1) << endl << endl;
    
    array<array<double, 4>, 2> m2{{
        {1.5,2.,3.,4.},
        {5.,6.77,7.,8.}
    }};
    muestra<double, 4>(m2);
    cout << "Traza: " << traza<double, 2, 4>(m2) << endl << endl;
    
    array<array<float, 2>, 4> m3{{
        {1.7F, 3.F},
        {4.F, 5.55F},
        {6.F, 7.F},
        {8.F, 9.F}
    }};
    muestra<float, 2>(m3);
    cout << "Traza: " << traza<float, 4, 2>(m3) << endl << endl;
    
    return 0;
}
