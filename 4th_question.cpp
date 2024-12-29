#include <bits/stdc++.h>
using namespace std;
void sortedInsert(stack<int>& s, int element) {
    if (s.empty() || element > s.top()) {
        s.push(element);
        return;
    }
    int temp = s.top();
    s.pop();
    sortedInsert(s, element);
    s.push(temp);
}
void sortStack(stack<int>& s) {
    if (!s.empty()) {
        int temp = s.top();
        s.pop();
        sortStack(s);
        sortedInsert(s, temp);
    }
}
int main() {
    stack<int> s;
    s.push(34);
    s.push(3);
    s.push(31);
    s.push(98);
    s.push(92);
    sortStack(s);
    cout << "Sorted stack: ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}
