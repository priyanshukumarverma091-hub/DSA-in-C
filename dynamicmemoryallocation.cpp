#include <iostream>
using namespace std;
int main()
{
    int *ptr;
    ptr = new int;

    cout << "enter value: ";
    cin >> *ptr;

    cout << "value: " << *ptr << endl;
    delete ptr;
    return 0;
}
