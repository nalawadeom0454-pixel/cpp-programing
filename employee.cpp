#include <iostream>
#include <string>
using namespace std;

class Employee
 {
private:
    int empId;
    string name;
    double salary;
public:

    
    void acceptDetails() {
        cout << "Enter Employee ID: ";
        cin >> empId;
        cin.ignore(); 
        cout << "Enter Employee Name: ";
        getline(cin, name);
        cout << "Enter Employee Salary: ";
        cin >> salary;
    }

    
    void displayDetails() {
        cout << "\n--- Employee Details ---\n";
        cout << "ID: " << empId << "\n";
        cout << "Name: " << name << "\n";
        cout << "Salary: " << salary << "\n";
    }
};

int main() {
    Employee emp;
    emp.acceptDetails();
    emp.displayDetails();
    return 0;
}