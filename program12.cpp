#include <iostream>
using namespace std;
int main() {
    int a = 10;
    int *p = &a;
    cout << "Value = " << *p << endl;
    cout << "Address = " << p;
    return 0;
}
