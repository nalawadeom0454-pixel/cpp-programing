#include <iostream>

using namespace std;


class Interest {
private:
    float principal;
    float rate;
    float time;
    float simpleInterest;

public:
    
    void getInput() {
        cout << "Enter Principal amount: ";
        cin >> principal;
        cout << "Enter Rate of interest (in %): ";
        cin >> rate;
        cout << "Enter Time (in years): ";
        cin >> time;
    }

    
    void calculate() {
        simpleInterest = (principal * rate * time) / 100;
    }

    
    void display() {
        cout << "\n--- Financial Summary ---" << endl;
        cout << "Principal Amount: " << principal << endl;
        cout << "Rate of Interest: " << rate << "%" << endl;
        cout << "Time Period     : " << time << " years" << endl;
        cout << "Simple Interest : " << simpleInterest << endl;
    }
};

int main() {
    
    Interest account;

    
    account.getInput();
    account.calculate();
    account.display();

    return 0;
}