#include <iostream>
using namespace std;
enum Day {MON = 1, TUE, WED, THU, FRI, SAT, SUN};
int main() {
    Day d = FRI;
    cout << "Day number = " << d;
    return 0;
}
