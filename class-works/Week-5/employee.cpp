
// create a class name employee that represent employee name , employee id , employee age , employee salary and name of the bank 
// derive two class one named account that is derived from class employee that has salary account number and should have function to simulate salary deposit which should display salary deposited on employee name on particular bank number and particular date 
// derive another class name computer department that is derived from class employee and should have subject they are teaching and should have function name role that display employee name and subject they are teaching

#include <iostream>
using namespace std;

class employee {
protected:
    string name;
    int id;
    int age;
    int salary;
    string bankname;

    employee() {
        name = "Null";
        id = 0;
        age = 0;
        salary = 0;
        bankname = "Null";
    }

    employee(string n, int a, int ag, int s, string b) : name(n), id(a), age(ag), salary(s), bankname(b) {}
    ~employee() {}
};

class account : public employee {
    int accountnumber;

public:
    account() : employee() {
        accountnumber = 0;
    }

    account(string n, int a, int ag, int s, string b, int c) : employee(n, a, ag, s, b) {
        accountnumber = c;
    }

    ~account() {}

    void simulateSalaryDeposit(string date) {
        cout << "Salary of " << salary << " deposited to " << name 
             << " at " << bankname << " account number " << accountnumber 
             << " on " << date << endl;
    }
};

class computerdepartment : public employee {
    string subject;

public:
    computerdepartment() : employee() {
        subject = "Null";
    }

    computerdepartment(string n, int a, int ag, int s, string b, string sub) : employee(n, a, ag, s, b) {
        subject = sub;
    }

    ~computerdepartment() {}

    void role() {
        cout << "Employee Name: " << name << endl;
        cout << "Subject Teaching: " << subject << endl;
    }
};

int main() {
    account empAccount("Alice Smith", 101, 30, 5500, "Chase Bank", 123456);
    empAccount.simulateSalaryDeposit("2026-06-24");

    computerdepartment empDept("Bob Jones", 102, 45, 6000, "Wells Fargo", "Object-Oriented Programming");
    empDept.role();

    return 0;
}