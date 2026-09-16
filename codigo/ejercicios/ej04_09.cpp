#include <iostream>
#include <array>
#include <span>

using namespace std;


void muestra_array(span<double> v) {
    cout << "[";
    for (int i = 0; i < v.size() - 1; i++) {
        cout << v[i] << ", ";
    }
    cout << v[v.size() - 1] << "]" << endl;
}


int main() {

    array<double, 10> v_1{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    muestra_array(v_1);

    return 0;
}

