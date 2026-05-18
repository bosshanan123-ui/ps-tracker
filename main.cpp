#include<iostream>
#include<string>
using namespace std;

struct Transaction {
	int id;
	string category;
	float amount;
	string discription;
	string date;

};
Transaction t[50];
int totalTransactions = 0; 

void addTransaction() {
    if (totalTransactions >= 50) {
        cout << "no space in file "<< endl;
        return;
    }

    cout << "Add New Transaction " << endl;

    t[totalTransactions].id = totalTransactions + 1; 
    
    cout << "Enter Category ";
    cin >> t[totalTransactions].category;
    
    cout << "Enter Amount: ";
    cin >> t[totalTransactions].amount;
    
    cout << "Enter Description (add anything you ewant to memorize ): ";
    cin >> t[totalTransactions].description;
    
    cout << "Enter Date (DD-MM-YYYY): ";
    cin >> t[totalTransactions].date;

    totalTransactions++; 
    cout << "Transaction added successfully" << endl;
}
void menu() {
	cout << "-------------------------------------------------------" << endl;
	cout << "             Welcome to personal expense tracker       " << endl;
	cout << "-------------------------------------------------------" << endl;
}
int main() {
	menu();
	

}