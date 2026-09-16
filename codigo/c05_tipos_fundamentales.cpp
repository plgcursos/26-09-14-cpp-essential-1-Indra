#include <iostream>
#include <limits>

using namespace std;

int main() {

    cout << "--- char ---" << endl;
    cout << "tam: " << sizeof(char) * 8 << endl;
    cout << "max: " << static_cast<int>(numeric_limits<char>::max()) << endl;
    cout << "min: " << static_cast<int>(numeric_limits<char>::min()) << endl;
    
    cout << "--- unsigned char ---" << endl;
    cout << "tam: " << sizeof(unsigned char) * 8 << endl;
    cout << "max: " << static_cast<int>(numeric_limits<unsigned char>::max()) << endl;
    cout << "min: " << static_cast<int>(numeric_limits<unsigned char>::min()) << endl;

    cout << "\n--- short ---" << endl;
    cout << "tam: " << sizeof(short) * 8 << endl;
    cout << "max: " << numeric_limits<short>::max() << endl;
    cout << "min: " << numeric_limits<short>::min() << endl;
    
    cout << "--- unsigned short ---" << endl;
    cout << "tam: " << sizeof(unsigned short) * 8 << endl;
    cout << "max: " << numeric_limits<unsigned short>::max() << endl;
    cout << "min: " << numeric_limits<unsigned short>::min() << endl;

    cout << "\n--- int ---" << endl;
    cout << "tam: " << sizeof(int) * 8 << endl;
    cout << "max: " << numeric_limits<int>::max() << endl;
    cout << "min: " << numeric_limits<int>::min() << endl;
    
    cout << "--- unsigned int ---" << endl;
    cout << "tam: " << sizeof(unsigned int) * 8 << endl;
    cout << "max: " << numeric_limits<unsigned int>::max() << endl;
    cout << "min: " << numeric_limits<unsigned int>::min() << endl;

    cout << "\n--- long ---" << endl;
    cout << "tam: " << sizeof(long) * 8 << endl;

    cout << "\n--- long long---" << endl;
    cout << "tam: " << sizeof(long long) * 8 << endl;

    cout << "\n--- float ---" << endl;
    cout << "tam: " << sizeof(float) * 8 << endl;

    cout << "\n--- double ---" << endl;
    cout << "tam: " << sizeof(double) * 8 << endl;

    cout << "\n--- long double ---" << endl;
    cout << "tam: " << sizeof(long double) * 8 << endl;

    return 0;
}