#include <iostream>
#include <bitset>

using namespace std;

int main() {

    char num = 5;
    char num_neg = -5;

    cout << static_cast<int>(num) << ": " << bitset<8>(num) << endl;;
    cout << static_cast<int>(num_neg) << ": " << bitset<8>(num_neg) << endl;
    
    char num_nuevo = ~num;
    cout << bitset<8>(num_nuevo) << endl;
    num_nuevo = num_nuevo + 1;
    cout << static_cast<int>(num_nuevo) << ": " << bitset<8>(num_nuevo) << endl;


    return 0;
}