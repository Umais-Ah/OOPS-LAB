#include<iostream>
#include <fstream>
using namespace std;

class book{
    private:
    ofstream bookFile;
    ifstream displayFile;
  public:
  book():bookFile("book.txt",ios::app),displayFile("book.txt"){
    
  }

  void WriteTotheFile(ifstream &chapter1File, ifstream &chapter2File){
    string line;

    bookFile << "Chapter 1" << endl;
    while(getline(chapter1File, line)){
        bookFile << line << endl;
    }

    bookFile << endl;

    bookFile << "Chapter 2" << endl;
    while(getline(chapter2File, line)){
        bookFile << line << endl;
    }

    bookFile.close();
}


void readTotheFile() {
    string line;
    while (getline(displayFile, line)) {
        if (line.empty()) {
            cout << endl;  
        } else {
            cout << line << endl;
        }
    }
    displayFile.close();
}

};
int main(){

    ifstream chapter1("chapter 1.txt");
    ifstream chapter2("chapter 2.txt");
  
    
    if (!chapter1 || !chapter2) {
        cerr << "Error: One or both chapter files could not be opened." << endl;
        return 1;
    }

    book b;
    b.WriteTotheFile(chapter1,chapter2);

   book b2;
   b2.readTotheFile();   

}