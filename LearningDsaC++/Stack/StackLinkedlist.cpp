#include <iostream>

using namespace std;

// Node structure for linked list
class Node {
public:
    int data;
    Node* next;

    // Constructor
    Node(int x) {
        data = x;
        next = nullptr;
    }
};

// Stack class using linked list
class Stack {
private:
    Node* top;  // Pointer to the top node

public:
    // Constructor
    Stack() {
        top = nullptr;  // Initially, stack is empty
    }

    // Check if stack is empty
    bool isEmpty() {
        return top == nullptr;
    }

    // Push an element onto the stack
    void push(int x) {
        Node* newNode = new Node(x);
        newNode->next = top;  // Link new node to previous top
        top = newNode;  // Update top
        cout << x << " pushed into stack." << endl;
    }

    // Pop the top element from the stack
    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow! Cannot pop from an empty stack." << endl;
            return;
        }
        Node* temp = top;
        cout << top->data << " popped from stack." << endl;
        top = top->next;  // Move top to next node
        delete temp;  // Free memory
    }

    // Get the top element
    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return top->data;
    }

    // Display stack elements
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return;
        }
        cout << "Stack elements: ";
        Node* temp = top;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Destructor to free memory
    ~Stack() {
        while (!isEmpty()) {
            pop();
        }
    }
};

// Main function to test the stack
int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.display();

    cout << "Top element: " << s.peek() << endl;

    s.pop();
    s.display();

    return 0;
}
