#include <bits/stdc++.h>
using namespace std;
int longestValidParentheses(const string& s) {
    stack<int> stack;
    stack.push(-1);
    int maxLength = 0;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '(') {
            stack.push(i);
        } else {
            stack.pop();
            if (stack.empty()) {
                stack.push(i);
            } else {
                maxLength = max(maxLength, i - stack.top());
            }
        }
    }
    return maxLength;
}

int main() {
    string s = "(()())";
    cout << "Length of longest valid parentheses substring: " << longestValidParentheses(s) <<endl;
    return 0;
}
