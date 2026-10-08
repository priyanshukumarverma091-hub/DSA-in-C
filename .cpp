#include <iostream>
using namespace std;

// Class
class Student {
private:
    string name;
    int age;

public:
    // Constructor
    Student(string n, int a) {
        name = n;
        age = a;
    }

    // Method
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    // Object creation
    Student s1("Rahul", 20);

    // Calling method
    s1.display();

    return 0;
}
