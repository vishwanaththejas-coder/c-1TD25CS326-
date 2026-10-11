#include <iostream>
using namespace std;
union Data {
    int number;
    float decimal;
};
int main() {
    Data d;
    d.number = 10;
    cout << "Number = " << d.number;
    return 0;
}
