#include <bits/stdc++.h>
using namespace std;

class Stack {
private:
    int* arr;        
    int top;        
    int capacity;    

public:
    Stack(int size) {       
        capacity = size;    
        top = -1;           
        arr = new int[size]; 
    }
    bool push(int x); 
    int pop(); 
    int peek(); 
    bool isEmpty(); 
    bool isFull();
    void printStack();
}; 
bool Stack::push(int x) {
    if (top >= (capacity - 1)) { 
        cout << "Stack Overflow" << endl;
        return false;
    } else {
        arr[++top] = x;         
        cout << x << " pushed into stack\n";
        return true;
    }
}

int Stack::pop() {
    if (top < 0) {             
        cout << "Stack Underflow" << endl;
        return -1;             
    } else {
        int x = arr[top--];    
        return x;
    }
}

int Stack::peek() {
    if (top == -1) {           
        cout << "Stack is Empty" << endl;
        return -1;            
    } else {
        return arr[top];       
    }
}

bool Stack::isEmpty() {
    return (top == -1);        
}

bool Stack::isFull() {
    return (top == capacity - 1); 
}
void Stack::printStack() {
    if (top == -1) {
        cout << "Stack is Empty" << endl;
        return ;
    }
    cout << "Elements in stack: ";
    for (int i = 0; i <= top; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    Stack s(10); 

    s.push(10); 
    s.push(20); 
    s.push(30); 
    s.push(40); 
    s.push(50); 
    s.push(60); 
    s.push(70); 
    s.push(80); 
    s.push(90); 
    s.push(100); 
    cout<<"All elements present in stack: "<<endl;
    s.printStack();
    cout << s.pop() << " Popped from stack\n"; 
    cout << s.pop() << " Popped from stack\n";
    cout << "Top element of stack: " << s.peek() << endl;
   cout << "Stack is Empty: " << (s.isEmpty() ? "Yes" : "No") << endl;
  cout << "Stack is Full: " << (s.isFull() ? "Yes" : "No") << endl;
    return 0;
}
