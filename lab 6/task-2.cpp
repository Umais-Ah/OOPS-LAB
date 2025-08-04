#include <iostream>
using namespace std;


class publication{
    protected:
    string title;
    float price;
    public:
    void getdata(){
        cout<<"Enter book title :";
        cin>>title;
        cout<<"Enter book price :";
        cin>>price;
      
    }

    void putdata(){
        cout<<"title :"<<title<<endl;
        cout<<"price :"<<price<<endl;
    }

};

class book : public publication{
 private:
 int count;
 public:
 void getdata(){
     publication::getdata();
     cout << "Enter page count: ";
     cin>>count;
 }


 int  getbookcount(){
  return count;
 }

 void putdata(){
    publication::putdata();
    cout<<"page count :"<<getbookcount()<<endl;
 }

};

class tape: public publication{
private:
float playtime; 
public:

void getdata(){
    publication::getdata();
    cout << "Enter playing time: ";
    cin>>playtime;
}

float getplaytime(){
    return playtime;
}
 void putdata(){
    publication::putdata();
    cout<<"playtime :"<<getplaytime()<<endl;
 }

};




int main() {
    cout<<"-----book class------"<<endl;
    book b1;
    cout<<"Input"<<endl;
    b1.getdata();
    cout<<"Ouput"<<endl;
    b1.putdata();


    cout<<"-----tape class------"<<endl;

    tape t1;
    cout<<"Input"<<endl;

    t1.getdata();

    cout<<"Output"<<endl;

    t1.putdata();

    return 0;
}