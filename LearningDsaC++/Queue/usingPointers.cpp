#include <iostream>
using namespace std;

struct Queue {
public:
    int* arr;
    int front;
    int rear;
    int capacity; // Maximum capacity of the queue

    // Constructor to initialize the queue
    Queue(int cap) {
        capacity = cap;
        front = rear = -1;
        arr = new int[capacity];
    }

    // Destructor to free the allocated memory
    ~Queue() {
        delete[] arr;
    }

    // Function to check if the queue is full
    bool isFull() {
        return (rear == capacity - 1);
    }

    // Function to check if the queue is empty
    bool isEmpty() {
        return (front == -1 && rear == -1);
    }

    // Function to add an element to the queue
    void enqueue(int item) {
        if (isFull()) {
            cout << "Queue is full. Cannot enqueue." << endl;
            return;
        }
        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear++;
        }
        arr[rear] = item;
        cout << item << " enqueued to queue." << endl;
    }

    // Function to remove an element from the queue
    int dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot dequeue." << endl;
            return -1;
        }
        int item = arr[front];
        if (front == rear) {
            front = rear = -1;
        } else {
            front++;
        }
        cout << item << " dequeued from queue." << endl;
        return item;
    }

    // Function to display the queue elements
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Queue elements are: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q(5);


    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    q.display();

    q.dequeue();
    q.dequeue();

    q.display();

    q.enqueue(60);
    q.enqueue(70);

    q.display();

    return 0;
}