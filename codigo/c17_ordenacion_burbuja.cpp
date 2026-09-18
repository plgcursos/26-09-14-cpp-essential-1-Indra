#include<iostream>
#include<span>
#include<random>
using namespace std;

template<typename T>
void muestra(span<const T> v) {
    cout << "[";
    for (int i = 0; i < v.size() - 1; i++) {
        cout << v[i] << ", ";
    }
    cout << v[v.size() - 1] << "]" << endl;
}

template<typename T>
void burbuja(span<T> v) {
    int comparaciones = v.size();
    bool hay_intercambio;
    do {
        hay_intercambio = false;
        comparaciones--;
        for (int i = 0; i < comparaciones; i++) {
            if (v[i] > v[i + 1]) {
                swap(v[i], v[i + 1]);
                hay_intercambio = true;
            }
        }
    } while(hay_intercambio);
}

int main() {
    int nums[] = {835, 666, 8, 93, 6532, 88, 5877, 4};

    muestra<int>(nums);
    burbuja<int>(nums);
    muestra<int>(nums);
    cout << endl;

    random_device semilla;
    mt19937 generador(semilla());
    uniform_int_distribution<int> distr(1, 1000);

    array<int, 50> ar_rand;
    for (int i = 0; i < ar_rand.size(); i++)
        ar_rand[i] = distr(generador);

    muestra<int>(ar_rand);
    burbuja<int>(ar_rand);
    muestra<int>(ar_rand);

    return 0;
 }