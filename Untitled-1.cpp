#include <iostream>
using namespace std;

#define MAX 5

class ArrayStack {
private:
    int arr[MAX];
    int top;

public:
    ArrayStack() : top(-1) {}

    bool isFull() const { return top == MAX - 1; }
    bool isEmpty() const { return top == -1; }

    void push(int val) {
        if (isFull()) {
            cout << "Stack Overflow! Cannot push " << val << "\n";
            return;
        }
        arr[++top] = val;
        cout << "Pushed: " << val << "\n";
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack Underflow! Stack is empty.\n";
            return -1;
        }
        return arr[top--];
    }

    int peek() const {
        if (isEmpty()) {
            cout << "Stack is empty.\n";
            return -1;
        }
        return arr[top];
    }

    // Traversal from top to bottom
    void display() const {
        if (isEmpty()) {
            cout << "Stack is empty.\n";
            return;
        }
        cout << "Stack elements (Top -> Bottom): ";
        for (int i = top; i >= 0; --i) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
};
