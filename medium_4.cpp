#include <bits/stdc++.h>
using namespace std;
class MinStack {
private:
    stack<int> mainStack;
    stack<int> minStack;
public:
    MinStack() {}
    void push(int x) {
        mainStack.push(x);
        if (minStack.empty() || x <= minStack.top()) {
            minStack.push(x);
        }
    }
    void pop() {
        if (mainStack.top() == minStack.top()) {
            minStack.pop();
        }
        mainStack.pop();
    }
    int top() {
        return mainStack.top();
    }
    int getMin() {
        return minStack.top();
    }
};
int main() {
    MinStack stack;
    stack.push(3);
    stack.push(5);
    cout << "Minimum: " << stack.getMin() << endl; 
    stack.push(2);
    stack.push(8);
    cout << "Minimum: " << stack.getMin() << endl; 
    stack.pop();
    cout << "Top: " << stack.top() << endl;       
    cout << "Minimum: " << stack.getMin() << endl; 
    stack.pop();
    cout << "Minimum: " << stack.getMin() << endl; 
    return 0;
}
