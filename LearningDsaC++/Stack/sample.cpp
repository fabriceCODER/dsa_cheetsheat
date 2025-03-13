#include <iostream>
using namespace std;

// Node class for stack elements
template <typename T>
class Node {
public:
    T data;
    Node<T>* next;

    // Constructor
    explicit Node(T data) {
        this->data = data;
        next = nullptr;
    }
};

// Stack class using linked list
template <typename T>
class Stack {
private:
    Node<T>* head;
    int size;

public:
    // Constructor
    Stack() {
        head = nullptr;
        size = 0;
    }

    // Check if stack is empty
    bool isEmpty() {
        return head == nullptr;
    }

    // Push an element onto the stack
    void push(T ele) {
        auto* newNode = new Node<T>(ele);
        newNode->next = head;  // Link new node to previous top
        head = newNode;        // Update head (top of stack)
        size++;
        cout << ele << " pushed into stack." << endl;
    }

    // Pop the top element from the stack
    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow! Cannot pop from an empty stack." << endl;
            return;
        }
        Node<T>* temp = head;
        cout << head->data << " popped from stack." << endl;
        head = head->next;  // Move top to next node
        delete temp;        // Free memory
        size--;
    }

    // Get the top element
    T top() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return T();  // Return default value of T
        }
        return head->data;
    }

    // Get size of stack
    int getSize() {
        return size;
    }

    // Display stack elements
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return;
        }
        cout << "Stack elements: ";
        Node<T>* temp = head;
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
    Stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.display();

    cout << "Top element: " << s.top() << endl;

    s.pop();
    s.display();

    cout << "Stack size: " << s.getSize() << endl;

    return 0;
}
