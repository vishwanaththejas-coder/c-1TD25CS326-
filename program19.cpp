#include <iostream>
using namespace std;
union Result {
    int marks;
    char grade;
};
int main() {
    Result r;
    r.marks = 95;
    cout << "Marks = " << r.marks << endl;
    r.grade = 'A';
    cout << "Grade = " << r.grade;
    return 0;
}
