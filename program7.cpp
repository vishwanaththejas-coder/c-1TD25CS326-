#include <iostream>
using namespace std;
enum Traffic {RED, YELLOW, GREEN};
int main() {
    Traffic light = GREEN;
    if(light == RED)
        cout << "Stop";
    else if(light == YELLOW)
        cout << "Wait";
    else
        cout << "Go";
    return 0;
}
