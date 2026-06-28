//A shop owner approaches you to develop software for managing their store. The system
// should maintain records for three items: rice, meat, and potatoes. It must track how many units
// of each item have been sold, how many remain in stock, and also store the price of each item,
// which should be updatable when needed. How would you design a solution for this problem?
// Write a complete C++ class that includes appropriate constructors, a destructor, necessary data
// members, and member functions, friend function, friend class where required to handle these
// requirements.

#include <iostream>
#include <string>
#include<iomanip>
using namespace std;


class manager;

class items {
    string name;
    int stock;
    int sold;
    float price;

public:
    items() {
        name = "Null";
        stock = 0;
        sold = 0;
        price = 0.0f;
    }
    
    items(string a, int b, int c, float d) : name(a), stock(b), sold(c), price(d) {}
    ~items() {}

    bool sell(int quantity) {
        if (quantity > stock) {
            return false;
        } else {
            stock -= quantity;
            sold += quantity;
            return true;
        }
    }

    friend class manager;
};

class manager {
    items inventory[3];

public:
    manager() {
        inventory[0] = items("Rice", 100, 0, 100.0f);     
        inventory[1] = items("Meat", 50, 0, 420.0f);     
        inventory[2] = items("Potatoes", 150, 0, 40.0f); 
    }


    bool updateprice() {
        int choice;
        float newPrice;
        cout << "\nWhich item's price do you want to update?\n";
        for (int i = 0; i < 3; i++) {
            cout << i + 1 << ". " << inventory[i].name << "\n";
        }
        cout << "Enter choice (1-3): ";
        cin >> choice;

        if (choice >= 1 && choice <= 3) {
            cout << "Enter new price for " << inventory[choice - 1].name << ": Rs";
            cin >> newPrice;
            inventory[choice - 1].price = newPrice;
            cout << "Price updated successfully!\n";
            return true;
        }
        cout << "Invalid choice.\n";
        return false;
    }


    void displaydata() {
        for (int i = 0; i < 3; i++) {
            cout  <<left << setw(12)<< inventory[i].name << inventory[i].sold << "\t  | " << inventory[i].stock << "\t\t    | Rs" << inventory[i].price << "\n";
        }
       
    }

    void makeSale(int itemIndex, int qty) {
        if (inventory[itemIndex].sell(qty)) {
            cout << "Sold " << qty << " units of " << inventory[itemIndex].name << "\n";
        } else {
            cout << "Failed to sell " << qty << " units of " << inventory[itemIndex].name << " (Out of stock)\n";
        }
    }
};

int main() {
    manager m;

    m.displaydata();

   
    m.makeSale(0, 10); 
    m.makeSale(2, 5);  

    m.displaydata();

    m.updateprice();

    m.displaydata();

    return 0;
}