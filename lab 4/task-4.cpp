#include<iostream>
using namespace std;
class shopping{

 private:
 int id;
 string name;
 float price;
 int quantity;

 public:
 shopping(){
    id=0;
   name="";
   price=0.0;
   quantity=0;
}
shopping(int id,string name,float price,int quantity){

      this->id=id;
      this->name=name;
      this->price=price;
      this->quantity=quantity;
}
shopping(shopping &s2){

      this->id=id;
      this->name=name;
      this->price=price;
      this->quantity=quantity;    
}

void add_item(){
    int stock; string check;
    cout<<"Enter item name :";
    cin>>check;
    if(check==this->name){
        cout<<"Enter stock you want to add :";
        cin>>stock;
        quantity+=stock;
        cout<<"new quantity is :"<<quantity<<endl;
    }
    else{
        cout<<"invalid item"<<endl;
    }
}

void remove_item(){
    int stock; string check;
    cout<<"Enter item name :";
    cin>>check;
    if(check==this->name){
        cout<<"Enter stock you want to remove :";
        cin>>stock;
        while(stock > quantity){
            cout<<"invalid amount,Enter again :";
            cin>>stock;
        }
        quantity-=stock;
        cout<<"new quantity is :"<<quantity<<endl;
    }
    else{
        cout<<"invalid item"<<endl;
    }
}


void displayItem() {
    cout << "Item ID: " << id << endl;
    cout << "Item Name: " << name  << endl;
    cout << "Price: " <<  price << endl;
    cout << "Quantity in Stock: " <<quantity<< endl;
}

void displayMenu() {
    int choice;
    do {
        cout << "\nMENU:\n";
        cout << "1. Add more stock to item" << endl;
        cout << "2. Remove stock from item" << endl;
        cout << "3. Display Item" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
            add_item();
                break;
            case 2:
            remove_item();
                break;
            case 3:
            displayItem();
                break;
            case 4:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);
}
};



int main(){
    int id, quantity,opt;
    float price;
    string name;

    shopping s1;
    cout << "Enter Item ID: ";
    cin >> id;
    cin.ignore(); 
    cout << "Enter Item Name: ";
    getline(cin, name);
    cout << "Enter Price: ";
    cin >> price;
    cout << "Enter Quantity in Stock: ";
    cin >> quantity;
    shopping s2(id, name, price, quantity); 
    shopping s3(s2);
  
    s2.displayMenu();

}