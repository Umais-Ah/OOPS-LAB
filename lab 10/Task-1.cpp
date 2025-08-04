#include<iostream>
#include<fstream>
using namespace std;

class student {
private:
    string name;
    int id;
    float gpa;

public:
    void writeDataToFile(ofstream &studentFile) {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter GPA: ";
        cin >> gpa;
        studentFile << "Name: " << name << ", ID: " << id << ", GPA: " << gpa << endl;
    }

    void readFromFile(ifstream &displayFile) {
        string line;
        while (getline(displayFile, line)) {
            cout << line << endl;
        }
    }
};

int main() {
    student s[5];

    ofstream studentFile("student.txt", ios::out);
    if (!studentFile) {
        cout << "Error opening file for writing!" << endl;
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        s[i].writeDataToFile(studentFile);
    }
    studentFile.close();

    ofstream studentFileapp("student.txt", ios::app);
    if (!studentFileapp) {
        cout << "Error opening file for appending!" << endl;
        return 1;
    }

    student appendstudent;
    appendstudent.writeDataToFile(studentFileapp);
    studentFileapp.close();

    ifstream DisplayFile("student.txt");
    if (!DisplayFile) {
        cout << "Error opening file for reading!" << endl;
        return 1;
    }

    student displaystudent;
    displaystudent.readFromFile(DisplayFile);
    DisplayFile.close();

    

    return 0;
}
