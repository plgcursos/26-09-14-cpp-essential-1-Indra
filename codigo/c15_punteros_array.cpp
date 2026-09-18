#include<iostream>
using namespace std;

int main() {

    int arr[5];
    int* ptr;

    arr[0] = 999;

    ptr = &arr[0];

    cout << "arr == ptr: " << (arr == ptr) << endl;
    cout << "*ptr == arr[0]: " << (*ptr == arr[0]) << endl;

    return 0;
}