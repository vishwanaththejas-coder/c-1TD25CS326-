#include <iostream>
using namespace std;
union Data {
    int number;
    char letter;
};
int main() {
    Data d;
    d.letter = 'A';
    cout << "Letter = " << d.letter;
    return 0;
}
