#include<iostream>
using namespace std;

int main() {
    const int filas = 5;
    const int cols = 3;
    int m[filas][cols] = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
        {10,11,12},
        {13,14,15}
    };

    cout << "m[2][1] " << m[2][1] << endl; 

    for (int i = 0; i < filas; i++){
        for (int j = 0; j < cols; j++) {
            cout << m[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}