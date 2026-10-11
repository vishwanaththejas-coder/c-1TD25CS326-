#include <iostream>
using namespace std;
struct Address {
    char city[20];
};
struct Student {
    int roll;
    Address addr;
};
int main() {
    Student s = {1, "Bengaluru"};
    cout << "Roll No: " << s.roll << endl;
    cout << "City: " << s.addr.city;
    return 0;
}
