#include <bits/stdc++.h>
using namespace std;
int evaluatePostfix(const string& expression) {
    stack<int> stack;
    for (char ch : expression) {
        if (isdigit(ch)) {
            stack.push(ch - '0');
        } else {
            int right = stack.top(); stack.pop();
            int left = stack.top(); stack.pop();
            switch (ch) {
                case '+': stack.push(left + right); break;
                case '-': stack.push(left - right); break;
                case '*': stack.push(left * right); break;
                case '/': stack.push(left / right); break;
            }
        }
    }
    return stack.top();
}

int main() {
    string expression = "231*+9-";
    cout << "Output: " << evaluatePostfix(expression) << endl; 
    return 0;
}
