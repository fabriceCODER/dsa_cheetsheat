#include <iostream>
#include <string>
using namespace std;

struct Student {
    int code;
    string name;
    int age;
};

struct Node {
    Student data;
    Node* next;
};

class PriorityQueue {
private:
    Node* head;

public:
    PriorityQueue() {
        head = nullptr;
    }

    void enqueue(int code, string name, int age) {
        Node* newNode = new Node();
        newNode->data.code = code;
        newNode->data.name = name;
        newNode->data.age = age;
        newNode->next = nullptr;

        if (head == nullptr || head->data.age < age) {
            newNode->next = head;
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr && temp->next->data.age >= age) {
                temp = temp->next;
            }
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }

    void dequeue() {
        if (head == nullptr) {
            cout << "Queue is empty" << endl;
            return;
        }

        Node* temp = head;
        head = head->next;
        cout << "Dequeued: " << temp->data.name << " (Age: " << temp->data.age << ")" << endl;
        delete temp;
    }

    void display() {
        if (head == nullptr) {
            cout << "Queue is empty" << endl;
            return;
        }

        Node* temp = head;
        while (temp != nullptr) {
            cout << "Code: " << temp->data.code << ", Name: " << temp->data.name << ", Age: " << temp->data.age << endl;
            temp = temp->next;
        }
    }
};

int main() {
    PriorityQueue pq;
    pq.enqueue(101, "Alice", 20);
    pq.enqueue(102, "Bob", 22);
    pq.enqueue(103, "Charlie", 19);
    pq.display();

    pq.dequeue();
    pq.display();

    return 0;
}