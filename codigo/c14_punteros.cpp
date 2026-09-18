#include<iostream>
using namespace std;

int main() {

    int* ptr1;
    int* ptr2;

    int num = 17;

    ptr1 = &num;

    cout << "*ptr1: " << *ptr1 << endl;
    cout << "ptr1: " << ptr1 << endl;

    cout << "num: " << num << endl;
    cout << "&num: " << &num << endl;
    
    cout << "sizeof(ptr1)" << sizeof(ptr1) << endl;
    
    ptr2 = ptr1;
    *ptr2 = 999;
    cout << "num: " << num << endl;


    return 0;
}