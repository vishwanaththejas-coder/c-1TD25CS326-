#include <iostream>
using namespace std;
struct Complex {
    int real, imag;
};
int main() {
    Complex a = {2, 3};
    Complex b = {4, 5};
    cout << "Sum = " << a.real + b.real
         << " + " << a.imag + b.imag << "i";
    return 0;
}
