#include<iostream>
#include <fstream>
using namespace std;

class user{
    private:
    string name;
    string email;
    int yearOfexperience;
    string summary;
    public:
    

    void WriteToFile(ofstream &resumeFile){
      cout<<"Enter name :";
      getline(cin,name);
      cout<<"Enter email :";
      cin>>email;
      cout<<"Enter year of experience :";
      cin>>yearOfexperience;
      cin.ignore();
      cout<<"Enter your summary:";
      getline(cin,summary);
      resumeFile<<"name :"<<name<<", email :"<<email<<", year of experience :"<<yearOfexperience<<", summary :"<<summary<<endl; 
    }

   void readFromFile(istream &displayFile){
    string line;
    while(getline(displayFile, line)){
        cout << line << endl;
    }
   }


};



int main(){
  
    user u;
    ofstream resumeFile("resume.txt",ios::trunc);
    if(!resumeFile){
        cout<<"Error to opening file"<<endl;
        return 1;
    }
    u.WriteToFile(resumeFile); 

    user u2;

    u2.WriteToFile(resumeFile);

    resumeFile.close();
    ifstream displayFile("resume.txt");
    if(!displayFile){
        cout<<"Error to opening file"<<endl;
        return 1;
    }
     
   
    user u3;
    u3.readFromFile(displayFile);
    displayFile.close();
}