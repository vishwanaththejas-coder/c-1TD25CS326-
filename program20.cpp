#include <iostream>
using namespace std;
union Data {
    int a;
    float b;
    char c;
};
int main() {
    cout << "Size of union = " << sizeof(Data);
    return 0;
}
