#include <iostream>
using namespace std;

class student
{
private:
    int age;
    student(int studentage)
    {
        age = studentage;
    }

    void age()
    {
        cout << "Age :" << age << endl;
    }

public:
    string name;
    int marks;

    student(string studentname, int studentmarks)
    {
        name = studentname;
        marks = studentmarks;
    }

    void display()
    {
        cout << "Name :" << name << endl;
        cout << "Marks :" << marks << endl;
    }
};
int main()
{
    student s1("priyanshu", 99);
    student s2("anamika", 55);
    student s3("anaanya", 92);
    student s4("gouri", 91);
    student

        s1.display();
    s2.display();
    s3.display();
    s4.display();

    return 0;
}
