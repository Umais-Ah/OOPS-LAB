#include<iostream>
#include <fstream>
#include <stdexcept>
using namespace std;


class FileNotFoundException: public exception{
    public:
    const char* what() const noexcept override{
        return "unable to open to";
    }
    
    };

class FileReader{
    public:

template <typename T>
T* readfromFile(string filename,int &size){
    size=0;

    ifstream file(filename);
     if(!file){
             throw FileNotFoundException();
     }
    
     T temp;

     
    while(file >> temp){
        size++;
    }

    
    T* data=new T[size];

    file.clear();          
    file.seekg(0);

    for(int i=0;i<size;i++){
         file>>data[i];
    }
    file.close();

    return data;
}
};
int main() {
    FileReader F;

    try {
        int size;
        cout << "---int output---" << endl;
        int* intArray = F.readfromFile<int>("integer.txt", size);
        for (int i = 0; i < size; i++) {
            cout << intArray[i] << endl;
        }

        FileReader F2;
        cout << "---string output---" << endl;
        string* StrArray = F2.readfromFile<string>("string.txt", size);
        for (int i = 0; i < size; i++) {
            cout << StrArray[i] << " ";
        }
        cout << endl;

        FileReader F3;
        cout << "---Exception handling case---" << endl;
        double* DArray = F3.readfromFile<double>("double.txt", size);
        for (int i = 0; i < size; i++) {
            cout << DArray[i] << " ";
        }
        cout << endl;

    } catch (FileNotFoundException e) {
        cout << e.what() << endl;
    }

    return 0;
}






  



