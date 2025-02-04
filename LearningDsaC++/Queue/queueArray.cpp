#include <iostream>

using namespace std;

class Queue {
private:
    static const int SIZE = 100; // Define a constant size for the queue
    int queue[SIZE];
    int front, rear;

public:
    // Constructor to initialize front and rear
    Queue() {
        front = rear = -1;
    }

    // Function to insert an element in the queue (enqueue)
    void enqueue() {
        int val;
        if (rear == SIZE - 1) {
            cout << "Queue Overflow! Cannot insert more elements.\n";
        } else {
            if (front == -1) front = 0; // Set front if inserting first element
            cout << "Enter the element to enqueue: ";
            cin >> val;
            queue[++rear] = val;
            cout << val << " inserted into the queue.\n";
        }
    }

    // Function to remove an element from the queue (dequeue)
    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue Underflow! No elements to dequeue.\n";
            return;
        }
        cout << "Element removed: " << queue[front++] << endl;
        if (front > rear) front = rear = -1; // Reset queue if empty
    }

    // Function to display all elements in the queue
    void display() const {
        if (front == -1) {
            cout << "Queue is empty.\n";
            return;
        }
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++)
            cout << queue[i] << " ";
        cout << endl;
    }

    // Function to read the front element without removing it
    void readFront() const {
        if (front == -1) {
            cout << "Queue is empty. No front element.\n";
            return;
        }
        cout << "Element at front: " << queue[front] << endl;
    }
};

int main() {
    Queue q;
    int choice;

    do {
        cout << "\n--- Queue Operations ---\n";
        cout << "1) Enqueue (Insert element)\n";
        cout << "2) Dequeue (Remove element)\n";
        cout << "3) Display queue\n";
        cout << "4) Read front element\n";
        cout << "5) Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: q.enqueue(); break;
            case 2: q.dequeue(); break;
            case 3: q.display(); break;
            case 4: q.readFront(); break;
            case 5: cout << "Exiting queue operations.\n"; break;
            default: cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}
