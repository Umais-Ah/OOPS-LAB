#include <iostream>
using namespace std;

class Media{
   protected:
   string title;
   string date;
   int id;
   string publisher;
   bool checkout;
   public:
   Media(string title,string date,int id,string publisher): title(title),date(date),id(id),publisher(publisher){}

void displayinfo(){
cout<<"title :"<<title<<endl;
cout<<"date :"<<date<<endl;
cout<<"id :"<<id<<endl;
cout<<"publisher :"<<publisher<<endl;
   }

  void checkOut(){
      
     cout<<"item checked cout";
     checkout=true;
  }


  void returnitem(){
    if(checkout==true){
    cout<<"item returned"<<endl;
    checkout=false;
    }
    else{
    cout<<"the item is not checkout"<<endl;
    }
  }

  void search(string publisher){
    if(publisher==this->publisher){
           cout<<"Media found"<<endl;
    }
    else{
        cout<<"Media not found"<<endl;
    }
}
};

class book : public Media{
   private:
   string author;
   string isbn;
   int NoPage;
   public:
   book(string title,string date,int id,string publisher,string author,string isbn,int NoPage):Media(title,date,id,publisher),author(author),isbn(isbn),NoPage(NoPage){}
   
   void displayinfo(){
    Media::displayinfo();
    cout<<"author :"<<author<<endl;
    cout<<"isbn :"<<isbn<<endl;
    cout<<"numbers of pages :"<<NoPage<<endl;
   }

   void search(string author){
    if(author==this->author){
           cout<<"book found"<<endl;
    }
    else{
        cout<<"book not found"<<endl;
    }
  }
};

class movie : public Media{
    private:
    string director;
    float rating;
    int duration;
    public:
    movie(string title,string date,int id,string publisher,string director,float rating,int duration):Media(title,date,id,publisher),director(director),rating(rating),duration(duration){}
    
    void displayinfo(){
     Media::displayinfo();
     cout<<"director :"<<director<<endl;
     cout<<"duration :"<<duration<<endl;
     cout<<"rating :"<<rating<<endl;
    }

    void search(string director){
        if(director==this->director){
               cout<<"movie found"<<endl;
        }
        else{
            cout<<"movie not found"<<endl;
        }
      }
 };


 class CD : public Media{
    private:
    string artist;
    string genre;
    int NoTrack;
    public:
    CD(string title,string date,int id,string publisher,string artist,string genre,int NoTrack):Media(title,date,id,publisher),artist(artist),genre(genre),NoTrack(NoTrack){}
    
    void displayinfo(){
     Media::displayinfo();
     cout<<"artist :"<<artist<<endl;
     cout<<"genre :"<<genre<<endl;
     cout<<"numbers of tracks :"<<NoTrack<<endl;
    }

    void search(string artist){
        if(artist==this->artist){
               cout<<"movie found"<<endl;
        }
        else{
            cout<<"movie not found"<<endl;
        }
      }
     
 };
        int main() {
            book b("The Great Gatsby", "1925", 101, "Scribner", "F. Scott Fitzgerald", "978-0743273565", 180);
            movie m("Inception", "2010", 102, "Warner Bros.", "Christopher Nolan", 8.8, 148);
            CD c("Thriller", "1982", 103, "Epic Records", "Michael Jackson", "Pop", 9);
        
            cout << "--- Book Info ---" << endl;
            b.displayinfo();
            cout << endl;
        
            cout << "--- Movie Info ---" << endl;
            m.displayinfo();
            cout << endl;
        
            cout << "--- CD Info ---" << endl;
            c.displayinfo();
            cout << endl;
        

            cout << "Checking out the book..." << endl;
            b.checkOut();
            cout << endl;
        
            cout << "Returning the book..." << endl;
            b.returnitem();
            cout << endl;
        
            cout << "Returning the book again (should show a message)..." << endl;
            b.returnitem();
            cout << endl;

            b.search("F. Scott Fitzgerald");
            cout << endl;        
            m.search("Christopher Nolan");
            cout << endl;
            c.search("Michael Jackson");
            cout << endl;          
            b.search("J.K. Rowling");
            cout << endl;
        
            return 0;
        }
        

   
 
