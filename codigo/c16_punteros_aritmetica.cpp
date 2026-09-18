#include<iostream>
using namespace std;

int main() {

    int* p1;
    int* p2;
    int arr[3] = {77, 48, 99};

    p1 = arr; // p1 = &arr[0];

    cout << *p1 << endl;
    cout << *(p1 + 2) << endl;
    p2 = p1 + 2;
    cout << *p2 << endl;

    int otro[100];
    for (int i = 0; i < 100; i++) {
        otro[i] = i * 2;
    }

    p1 = otro;
    p1 += 50;

    cout << *p1 << endl;

    // cout << *(p1 + 120) << endl;
    p2 = &otro[22];
    cout << *p2 << endl;

    int dif = p1 - p2;
    cout << dif << endl;

    return 0;
}