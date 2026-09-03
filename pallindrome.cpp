//wap to check if a given no. is pallindrome using stack #include <iostream>
#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    string str = "madam";
    stack<char> s;

    // Push all characters into stack
    for (char ch : str) {
        s.push(ch);
    }

    bool palindrome = true;

    // Compare original string with stack
    for (char ch : str) {
        if (ch != s.top()) {
            palindrome = false;
            break;
        }
        s.pop();
    }

    if (palindrome)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}