#include <iostream>
using namespace std;
class student
{
public:
    int rollno;
    float marks;
};
int main()
{
    student *s = new student;

    cout << "enter roll no: ";
    cin >> s->rollno;

    cout << "enter marks: ";
    cin >> s->marks;

    cout << "\nroll no: " << s->rollno;
    cout << "\nmarks: " << s->marks;

    delete s;
    return 0;
}
