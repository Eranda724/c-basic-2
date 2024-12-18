#include <iostream>
#include <string>

using namespace std;

class Account {
private:
    int accountNumber;
    string name;
    double balance;

public:
    Account(int accNum, string accName, double accBalance) {
        accountNumber = accNum;
        name = accName;
        balance = accBalance;
    }

    double getBalance() {
        return balance;
    }

    double deposit(double amount) {
        balance += amount;
        return balance;
    }

    double withdraw(double amount) {
        if (amount > balance) {
            cout << "Error: Insufficient balance." << endl;
            return balance;
        }
        balance -= amount;
        return balance;
    }

    void enterAccountInfo() {
        cout << "Enter Account Number: ";
        cin >> accountNumber;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Balance: ";
        cin >> balance;
    }
};

int main() {
    Account acc(0, "", 0);
    int choice;
    double amount;

    while (true) {
        cout << endl << "Choose Your Choice" << endl;
        cout << "1 Deposit" << endl;
        cout << "2 Withdraw" << endl;
        cout << "3 Exit" << endl;
        cout << "Enter Your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter Amount U want to deposit? ";
                cin >> amount;
                cout << "Current Balance: " << acc.deposit(amount) << endl;
                break;
            case 2:
                cout << "Enter Amount U want to withdraw? ";
                cin >> amount;
                cout << "Current Balance: " << acc.withdraw(amount) << endl;
                break;
            case 3:
                cout << "Thank you. Your final balance is: " << acc.getBalance() << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    }

    return 0;
}
