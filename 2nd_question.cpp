#include<bits/stdc++.h>
using namespace std;
bool isValid(const string& s) {
    stack<char> stack;
    unordered_map<char, char> mapping = {{')', '('}, {']', '['}, {'}', '{'}};

    for (char ch : s) {
        if (mapping.count(ch)) {
            if (stack.empty() || stack.top() != mapping[ch]) {
                return false;
            }
            stack.pop();
        } else {
            stack.push(ch);
        }
    }
    return stack.empty();
}

int main() {
    string input = "{[()]}";
    cout << boolalpha << isValid(input) << endl; 
    return 0;
}
