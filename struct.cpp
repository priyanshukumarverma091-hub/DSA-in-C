#include <iostream>
using namespace std;

struct student
{
    string name;
    int roll;
    float marks;
};
int main()
{
    student s1;

    s1.name = "priyanshu";
    s1.roll = 21;
    s1.marks = 22;
    cout << "name: " << s1.name << endl;
    cout << "roll: " << s1.roll << endl;
    cout << "marks: " << s1.marks << endl;
    return 0;
}
