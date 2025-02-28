#include <iostream>
#include <string>
using namespace std;

 int SIZE = 10;

struct Customer {
    string name;
    string address;
    string city_state_zip;
    string number;
    float balance;
    string payment;
};

void add_customer(Customer c[], int &count) {
    if (count >= SIZE) {
        cout <<endl<<"Customer list is full"<<endl;
        return;
    }
    cout << "Enter Name: ";
    cin >> c[count].name;
    cout << "Enter Address: ";
    cin >> c[count].address;
    cout << "Enter City, State, ZIP: ";
    cin >> c[count].city_state_zip;
    cout << "Enter Phone Number: ";
    cin >> c[count].number;
    do {
        cout << "Enter Account Balance: "<<endl;
        cin >> c[count].balance;
        if (c[count].balance < 0)
            cout << "Invalid number. Try again"<<endl;
    } while (c[count].balance < 0);
    cout << "Enter Last Payment Date: ";
    cin >> c[count].payment;
    count++;
    cout << "Customer added successfully!"<<endl;
}

void edit_customer(Customer c[], int count) {
    if (count == 0) {
        cout <<endl<<"No customers to edit."<<endl;
        return;
    }
    int index;
    cout << "Enter customer index (0 to " << count - 1 << "): ";
    cin >> index;
    if (index < 0 || index >= count) {
        cout << "Invalid index."<<endl;
        return;
    }
    cout << "Enter New Name: ";
    cin >> c[index].name;
    cout << "Enter New Address: ";
    cin >> c[index].address;
    cout << "Enter New City, State, ZIP: ";
    cin >> c[index].city_state_zip;
    cout << "Enter New Phone Number: ";
    cin >> c[index].number;
    do {
        cout << "Enter New Account Balance: ";
        cin >> c[index].balance;
        if (c[index].balance < 0)
            cout << "Account balance cannot be negative. Try again.\n";
    } while (c[index].balance < 0);
    cout << "Enter New Last Payment Date: ";
    cin >> c[index].payment;
    cout << "Customer updated successfully!"<<endl;
}

void display_customer(const Customer c[], int count) {
    if (count == 0) {
        cout << "\nNo customers to display.\n";
        return;
    }
    for (int i = 0; i < count; i++) {
        cout << "\nCustomer " << i << endl;
        cout << "Name: " << c[i].name <<endl;
        cout << "Address: " << c[i].address << endl;
        cout << "City, State, ZIP: " << c[i].city_state_zip << endl;
        cout << "Phone Number: " << c[i].number <<endl;
        cout << "Account Balance:" << c[i].balance << endl;
        cout << "Last Payment Date: " << c[i].payment << endl;
    }
}

int main() {
    Customer c[SIZE];
    int count = 0;
    int choice;
    
    do {
        cout << "\nCustomer Account Management System"<<endl;
        cout << "1. Add Customer"<<endl;
        cout << "2. Edit Customer"<<endl;
        cout << "3. Display All Customers"<<endl;
        cout << "4. Exit"<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                add_customer(c, count);
                break;
            case 2:
                edit_customer(c, count);
                break;
            case 3:
                display_customer(c, count);
                break;
            case 4:
                cout << "Exiting program..."<<endl;
                break;
            default:
                cout << "Invalid choice. Try again."<<endl;
        }
    } while (choice != 4);
    
    return 0;
}
