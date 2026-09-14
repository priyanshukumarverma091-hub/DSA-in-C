Given a string s containing only:

( ) { } [ ]


  ans

  #include <iostream>
#include <stack>
using namespace std;

bool isValid(string s) {
    stack<char> st;

    for (char ch : s) {

        // Opening bracket
        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        }

        // Closing bracket
        else {
            if (st.empty())
                return false;

            char top = st.top();
            st.pop();

            if ((ch == ')' && top != '(') ||
                (ch == '}' && top != '{') ||
                (ch == ']' && top != '[')) {
                return false;
            }
        }
    }

    return st.empty();
}

int main() {
    string s;
    cin >> s;

    cout << (isValid(s) ? "true" : "false");

    return 0;
}
