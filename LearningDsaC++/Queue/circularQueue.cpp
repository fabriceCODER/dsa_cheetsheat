#include <iostream>
#define SIZE 5
using namespace std;

class Queue {
private:
    int items[SIZE], front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    bool isFull() {
        return (front == 0 && rear == SIZE - 1) || (front == rear + 1);
    }

    bool isEmpty() {
        return front == -1;
    }

    void enqueue(int element) {
        if (isFull()) {
            cout << "Queue is full" << endl;
            return;
        }

        if (front == -1) { // First element
            front = 0;
        }

        rear = (rear + 1) % SIZE;
        items[rear] = element;
        cout << "Inserted " << element << endl;
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }

        int element = items[front];

        if (front == rear) { // Queue becomes empty
            front = -1;
            rear = -1;
        } else {
            front = (front + 1) % SIZE;
        }

        return element;
    }

    void display() {
        if (isEmpty()) {
            cout << "Empty Queue" << endl;
            return;
        }

        cout << "Front -> " << front << " | Rear -> " << rear << endl;
        cout << "Queue elements: ";

        int i = front;
        while (true) {
            cout << items[i] << " ";
            if (i == rear) break;
            i = (i + 1) % SIZE;
        }
        cout << endl;
    }
};

int main() {
    Queue q;

    q.dequeue(); // Should print "Queue is empty"

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);

    q.enqueue(6); // Should print "Queue is full"

    q.display();

    int elem = q.dequeue();
    if (elem != -1)
        cout << "Deleted Element is " << elem << endl;

    q.display();

    q.enqueue(7);
    q.display();

    q.enqueue(8); // Should print "Queue is full"

    return 0;
}
