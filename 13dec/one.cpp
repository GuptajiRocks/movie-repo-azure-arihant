#include <bits/stdc++.h>
using namespace std;

class BankAccount {
    public:
    int accNo;
    string name;
    int balance = 0;

    BankAccount(int no, string n) {
        accNo = no;
        name = n;
    }

    BankAccount() {
        NULL;
    }

    void deposit(int addBal) {
        if (addBal < 0) {
            cout << "Please enter correct value\n";
        } else {
            balance = balance + addBal;
        }
    }

    void withDraw(int amt) {
        if ((balance - amt) < 0 || balance == 0) {
            cout << "Insufficient funds\n";
        } else {
            cout << "INR " << amt << " has been withdrawn from your account\n";
            balance = balance - amt;
        }
    }

    void checkBalance() {
        cout << "Your current balance is: " << balance << endl;
    }
};

int main() {
    BankAccount b1(1234, "Arihant Gupta");
    b1.deposit(100000);
    b1.checkBalance();
    b1.withDraw(200000);
    b1.withDraw(100000);
    b1.checkBalance();

    return 0;    
}