#include <bits/stdc++.h>
using namespace std;
string reverseString(const string& str) {
    stack<char> charStack;
    for (char ch : str) {
        charStack.push(ch);
    }    
    string reversedStr;
    while (!charStack.empty()) {
        reversedStr += charStack.top();
        charStack.pop();
    }
    return reversedStr;
}
int main() {
    string input = "Hello, World!";
    string output = reverseString(input);
    cout << "Reversed String: " << output << endl;
    return 0;
}
