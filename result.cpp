#include <iostream>
#include <string>

using namespace std;

class ExamResult {
private:
    string studentName;
    float marks[5];
    float totalMarks;
    float percentage;

public:
    
    void acceptMarks() {
        cout << "Enter student name: ";
        cin.ignore(); 
        getline(cin, studentName);

        cout << "Enter marks for 5 subjects (out of 100 each):\n";
        for (int i = 0; i < 5; i++) {
            cout << "Subject " << (i + 1) << ": ";
            cin >> marks[i];
            
            
            while (marks[i] < 0 || marks[i] > 100) {
                cout << "Invalid marks! Please enter between 0 and 100: ";
                cin >> marks[i];
            }
        }
    }

    
    void calculateResult() {
        totalMarks = 0;
        for (int i = 0; i < 5; i++) {
            totalMarks += marks[i];
        }
        
        percentage = (totalMarks / 500.0f) * 100.0f;
    }

    
    void displayResult() {
        cout << "\n===============================\n";
        cout << "         EXAM REPORT           \n";
        cout << "===============================\n";
        cout << "Student Name : " << studentName << "\n";
        cout << "Total Marks  : " << totalMarks << " / 500\n";
        cout << "Percentage   : " << percentage << "%\n";
        
        
        if (percentage >= 40.0f) {
            cout << "Final Status : PASSED\n";
        } else {
            cout << "Final Status : FAILED\n";
        }
        cout << "===============================\n";
    }
};

int main() {
    
    ExamResult student;

    
    student.acceptMarks();
    student.calculateResult();
    student.displayResult();

    return 0;
}