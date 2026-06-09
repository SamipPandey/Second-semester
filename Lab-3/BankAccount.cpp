#include <iostream>
#include <string>
using namespace std;

class account {
private:
    int accountNumber; 
    string name;
    float balance;
    bool isActive; 

public:
    account() {
        this->accountNumber = 0; 
        this->name = "NULL"; 
        this->balance = 0.0f; 
        this->isActive = false;
    }
    account(int number, string name, float balance, bool status) {
        this->accountNumber = number; 
        this->name = name; 
        this->balance = balance; 
        this->isActive = status;
    }
    ~account() {}

    int getAccountNumber() { 
        return this->accountNumber; 
    }
    bool getStatus() { 
        return this->isActive; 
    }

    void setData(int number, string name, float balance, bool status) {
        this->accountNumber = number; 
        this->name = name; 
        this->balance = balance; 
        this->isActive = status;
    }

    void display() {
        cout << "\n--- Account Details ---\nName           : " << this->name 
             << "\nAccount Number : " << this->accountNumber << "\nBalance        : Nrs" << this->balance 
             << "\nStatus         : " << (this->isActive ? "Active" : "Inactive") << "\n-----------------------\n";
    }

    void deposit(float amount) {
        if (this->isActive && amount > 0) {
            this->balance += amount;
            cout << "Nrs" << amount << " deposited successfully.\n";
        } else {
            cout << "failed to deposit\n";
        }
    }

    bool withdraw(float amount) {
        if (!this->isActive || amount <= 0 || amount > this->balance) {
            cout << "Transaction failed\n";
            return false;
        }
        this->balance -= amount;
        cout << "Nrs" << amount << " withdrawn success\n";
        return true;
    }

    void transfer(account &recipient, float amount) {
        if (this->isActive && recipient.getStatus() && this->withdraw(amount)) {
            recipient.balance += amount;
            cout << "Transferred Nrs" << amount << " to Account #" << recipient.getAccountNumber() << " successfully.\n";
        } else {
            cout << "Transfer failed.\n";
        }
    }
};

int findAccount(account accounts[], int count, int number) {
    for (int i = 0; i < count; i++) {
        if (accounts[i].getAccountNumber() == number) {
            return i;
        }
    }
    return -1;
}

int main() {
    account accounts[100];
    int total = 0, choice, number, count;
    float amount;

    cout << "Welcome to Kec-Bank\n";
    while (true) {
        cout << "\n===============================" << endl;
        cout << "1. Create Account" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Deposit" << endl;
        cout << "4. Transfer" << endl;
        cout << "5. Display" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;
        
        if (choice == 6) {
            break;
        }

        if (choice == 1) {
            string name; 
            float balance;
            cout << "Enter name for the account: "; 
            cin >> name;
            cout << "Enter initial deposit: Nrs"; 
            cin >> balance;
            
            accounts[total].setData(total + 1, name, balance, true);
            accounts[total].display();
            total++;
            continue;
        }

        cout << "Enter Account Number: "; 
        cin >> number;
        count = findAccount(accounts, total, number);
        if (count == -1) { 
            cout << "Account not found.\n"; 
            continue; 
        }

        switch (choice) {
            case 2: 
                cout << "Enter amount: "; 
                cin >> amount; 
                accounts[count].withdraw(amount); 
                break;
            case 3: 
                cout << "Enter amount: "; 
                cin >> amount; 
                accounts[count].deposit(amount); 
                break;
            case 4: {
                cout << "Enter Recipient Account Number: "; 
                int rNumber; 
                cin >> rNumber;
                int rCount = findAccount(accounts, total, rNumber);
                if (rCount != -1) {
                    cout << "Enter transfer amount: Nrs"; 
                    cin >> amount;
                    accounts[count].transfer(accounts[rCount], amount);
                } else {
                    cout << "Recipient account not found.\n";
                }
                break;
            }
            case 5: 
                accounts[count].display(); 
                break;
            default: 
                cout << "Invalid\n";
        }
    }
    return 0;
}