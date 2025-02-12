#include <iostream>

using namespace std;

class Queue {
private:
    int* queue;
    int front;
    int rear;
    int capacity;
    int size;

public:
    Queue(int cap) {
        capacity = cap;
        front = rear = -1;
        queue = new int[capacity]; // Fixed array allocation
        size = 0;
    }

    ~Queue() { // Destructor to free the allocated memory
        delete[] queue;
    }

    void enqueue(int val) {
        if (isFull()) {
            cout << "Queue is full" << endl;
        } else {
            if (front == -1) {
                front = 0;
            }
            rear++;
            queue[rear] = val;
            size++;
        }
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
        } else {
            cout << "The removed element in the queue is " << queue[front] << endl;
            front++;
            size--;
        }
    }

    int getFrontElement() {
        if (isEmpty()) {
            return 0;
        } else {
            return queue[front];
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
        } else {
            for (int i = front; i <= rear; i++) {
                cout << "The element at index " << i << " = " << queue[i] << endl;
            }
        }
    }

    int count() { return size; }

    bool isEmpty() { return size == 0; }

    bool isFull() { return size == capacity; }
};

int main() {
    Queue q(20); // Fixed the object instantiation
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);

    q.display();

    q.dequeue();
    q.dequeue();
    q.display();

    return 0;
}
