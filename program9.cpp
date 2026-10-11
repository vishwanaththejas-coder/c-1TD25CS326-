#include <iostream>
using namespace std;
struct Employee {
    int id;
    float salary;
};
int main() {
    Employee e = {101, 25000};
    cout << "Employee ID: " << e.id << endl;
    cout << "Salary: " << e.salary;
    return 0;
}
