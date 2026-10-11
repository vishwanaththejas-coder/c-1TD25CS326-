#include <iostream>
using namespace std;
struct Student {
    int roll;
    union Result {
        int marks;
        char grade;
    } r;
};
int main() {
    Student s;
    s.roll = 1;
    s.r.marks = 90;
    cout << "Roll No: " << s.roll << endl;
    cout << "Marks: " << s.r.marks;
    return 0;
}
