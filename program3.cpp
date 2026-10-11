#include <iostream>
using namespace std;
int main() {
    int a[5] = {12, 45, 23, 67, 34};
    int max = a[0];
    for(int i = 1; i < 5; i++) {
        if(a[i] > max)
            max = a[i];
    }
    cout << "Largest = " << max;
    return 0;
}
