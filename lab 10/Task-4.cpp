#include <iostream>
#include <fstream>
using namespace std;

class TextEditor {
private:
    fstream file;
public:
    TextEditor(const string& filename) {
        file.open(filename, ios::in | ios::out);
        if (!file) {
            cerr << "Error opening file!" << endl;
            exit(1);
        }
    }

    void writeInitialContent() {
        ofstream outFile("info.txt", ios::out);
        outFile << "C++ is a powerful programming language.";
        outFile.close();
    }

    void displayInitialPositions() {
        cout << "Initial get pointer: " << file.tellg() << endl;
        cout << "Initial put pointer: " << file.tellp() << endl;
    }

    void modifyContent() {
        string word(8, ' ');
        file.seekg(9);
        file.read(&word[0], 8);
        cout << "Word read at position 9: " << word << endl;

        file.seekp(9);
        file << "dynamic";
    }

    void displayUpdatedPositions() {
        cout << "Updated get pointer: " << file.tellg() << endl;
        cout << "Updated put pointer: " << file.tellp() << endl;
    }

    void displayModifiedContent() {
        file.close();
        ifstream inFile("info.txt");
        string line;
        getline(inFile, line);
        cout << "Modified content: " << line << endl;
        inFile.close();
    }
};

int main() {
    TextEditor editor("info.txt");
    editor.writeInitialContent();
    editor.displayInitialPositions();
    editor.modifyContent();
    editor.displayUpdatedPositions();
    editor.displayModifiedContent();
    return 0;
}
