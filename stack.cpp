#include <iostream>
#include <vector>
#include <string>
using namespace std;

void push(vector<char>& stack, char ch) {
    if (stack.size() < 100) {
        stack.push_back(ch);
    } else {
        cout << "Stack Overflow" << endl;
    }
}

char pop(vector<char>& stack) {
    if (!stack.empty()) {
        char ch = stack.back();
        stack.pop_back();
        return ch;
    } else {
        cout << "Stack Underflow" << endl;
        return '\0';
    }
}

int priority(char ch) {
    if (ch == '^')
        return 3;
    else if (ch == '*' || ch == '/')
        return 2;
    else if (ch == '+' || ch == '-')
        return 1;
    else
        return 0;
}

int main() {
    vector<char> stack;
    string cap;
    cout << "Enter a string: ";
    getline(cin, cap);
    for (size_t i = 0; i < cap.size(); i++) {
        char ch = cap[i];
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            push(stack, ch);
        }
        // Add more logic as needed for your application
        // Example: handle operators or parentheses here if needed
    }
    // Example: print stack contents
    cout << "Stack contents: ";
    for (char c : stack) {
        cout << c << " ";
    }
    cout << endl;
    return 0;
}
