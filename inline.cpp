#include <iostream>
using namespace std;

inline int square(int x)
{
    return x * x;
}

int main()
{
    int n = 5;
    cout << "square : " << square(n);

    return 0;
}
