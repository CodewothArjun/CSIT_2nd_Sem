#include <iostream>
#include <fstream>
#include <cstring>
#define N 2
using namespace std;

class Student {
public:
    int rollno;
    char name[20];
    char address[20];

    void read_data() {
        cout << "Enter rollno: ";
        cin >> rollno;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter address: ";
        cin >> address;
    }

    void display() {
        cout << rollno << "\t" << name << "\t" << address << endl;
    }
};

int main() {
    Student s;
    fstream fin;

    fin.open("newfile.txt", ios::in | ios::out | ios::binary);
    if (!fin.is_open()) {
        cout << "Failed to open the file!" << endl;
        return 1;
    }

    cout << "Reading student information" << endl;
    cout << "Rollno\tName\tAddress" << endl;

    // Read and display all records
    while (fin.read(reinterpret_cast<char*>(&s), sizeof(Student))) {
        s.display();
    }

    cout << "\nEnter the rollno of student whose record is to be modified: ";
    int r;
    cin >> r;

    // Calculate the position to seek based on the record size
    streampos pos = sizeof(Student) * (r - 1);
    
    // Clear any error flags
    if (fin.eof())
        fin.clear();

    // Seek to the position of the record to modify
    fin.seekp(pos);

    cout << "Enter new record" << endl;
    s.read_data();

    // Write the modified record
    fin.write(reinterpret_cast<char*>(&s), sizeof(Student));

    // Seek back to the beginning of the file
    fin.seekg(0);

    cout << "The modified record" << endl;

    // Read and display all records again
    while (fin.read(reinterpret_cast<char*>(&s), sizeof(Student))) {
        s.display();
    }

    fin.close();
    return 0;
}
