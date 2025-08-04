#include <iostream>
using namespace std;

 class book{
    private:
    string name;
    string author;
    int id;
    public:
    book(){
        name=" ";
        author=" ";
        id=0;
    }
    book(string name,string author,int id){
        this->name=name;
        this->author=author;
        this->id=id;
    }
    string getbookName(){
        return name;
    }
    string getbookAuthor(){
        return author;
    }
    int getbookId(){
        return id;
    }

 };

 class library{
  private:
  book *b[5]; // Array of book pointers (Aggregation: Library has books, but does not own them)
   public:
  int count;
  public:
  library(){
    count=0;
    for (int i = 0; i < 5; i++) {
        b[i] = nullptr;
    }
  }
  void addbook(book *bk){
    if(count < 5){
        b[count]=bk;// Aggregation: Only storing a reference, not managing the books lifetime
        count++;
    }
    else{
        cout<<"library is full"<<endl;
    }
  }

 book **getbook(){
      return b;
 }
 
 int getcount(){
    return count;
 }
  void display(){
    cout<<endl<<"=====WELCOME TO LIBRARY=========="<<endl;
    for(int i=0;i<count;i++){
        if(b[i]!=nullptr){
    cout<<endl<<"book "<<i+1<<endl;
    cout<<"book name :"<<b[i]->getbookName()<<endl;
    cout<<"book author :"<<b[i]->getbookAuthor()<<endl;
    cout<<"book id :"<<b[i]->getbookId()<<endl;
            }
            else {
                cout << "Book " << i+1 << " has been deleted." << endl;
            }
        } 
      }

};




int main() {
   
book *b1 = new book("1984", "George Orwell", 1);
book *b2 = new book("To Kill a Mockingbird", "Harper Lee",2);
 library l;

 // Adding books to the library (aggregation: library does not own these books)
 l.addbook(b1);
 l.addbook(b2);


 l.display();

 // Deleting books from memory (library is not responsible for deleting them)
 for (int i = 0; i < l.getcount(); i++) {
    if (l.getbook()[i] != nullptr) {  
        delete l.getbook()[i];  
        l.getbook()[i] = nullptr;  
    }
}

// Displaying library again after books are deleted
l.display();



}