#include <iostream>

using namespace std;

int main() {

    int nums[5]{};
    for (int num : nums) {
        cout << num << endl;
    }
    cout << endl;

    // El identificador de un array nativo, en realidad es un puntero al primer elemento
    // Desconoce por completo su tamaño
    for (int i = 0; i < 15; i++) {
        cout << nums[i] << endl;
    }

    cout << nums[796] << endl;
     return 0;
}