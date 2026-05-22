#include<iostream>
#include<string>
using namespace std;
class Transaction {
private:
 
    int id;
    string category;
    float amount;
    string description;
    string date;

public:
    Transaction() {
        id = 0;
        category = "";
        amount = 0.0;
        description = "";
        date = "";
    }

    Transaction(int i, string cat, float amt, string desc, string d) {
        id = i;
        category = cat;
        amount = amt;
        description = desc;
        date = d;
    }
    void display() const {
        cout << "ID: " << id
            << " | Category: " << category
            << " | Amount: " << amount
            << " | Desc: " << description
            << " | Date: " << date << endl;
    }
};

Transaction t[50];
int transactionCount = 0;
void menu() {
    cout << "\n-------------------------------------------------------" << endl;
    cout << "             Personal Expense Tracker                    " << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << "1. Add a New Expense" << endl;
    cout << "2. View All Expenses" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter your choice: ";
}
int main() {
	menu();
	

}
