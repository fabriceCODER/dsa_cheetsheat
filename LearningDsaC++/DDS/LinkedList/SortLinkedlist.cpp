#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

class LinkedList {
public:
    Node* head;
    LinkedList() {
        this->head = nullptr;
    }

    void append(int data) {
        Node* new_node = new Node(data);
        if (!head) {
            head = new_node;
            return;
        }
        Node* last = head;
        while (last->next) {
            last = last->next;
        }
        last->next = new_node;
    }

    void splitList(Node* source, Node** frontRef, Node** backRef) {
        Node* fast;
        Node* slow;
        slow = source;
        fast = source->next;
        while (fast != nullptr) {
            fast = fast->next;
            if (fast != nullptr) {
                slow = slow->next;
                fast = fast->next;
            }
        }
        *frontRef = source;
        *backRef = slow->next;
        slow->next = nullptr;
    }

    Node* sortedMerge(Node* a, Node* b) {
        Node* result = nullptr;
        if (a == nullptr) return b;
        if (b == nullptr) return a;
        if (a->data <= b->data) {
            result = a;
            result->next = sortedMerge(a->next, b);
        } else {
            result = b;
            result->next = sortedMerge(a, a->next);
        }
        return result;
    }

    void mergeSort(Node** headRef) {
        Node* head = *headRef;
        Node* a;
        Node* b;
        if ((head == nullptr) || (head->next == nullptr)) {
            return;
        }
        splitList(head, &a, &b);
        mergeSort(&a);
        mergeSort(&b);
        *headRef = sortedMerge(a, b);
    }

    void printList(Node* node) {
        while (node != nullptr) {
            cout << node->data << " ";
            node = node->next;
        }
        cout << endl;
    }

    void sort() {
        mergeSort(&head);
    }
};

int main() {
    LinkedList llist;
    llist.append(17);
    llist.append(10);
    llist.append(15);
    llist.append(25);
    llist.append(40);

    cout << "Original List: ";
    llist.printList(llist.head);

    llist.sort();

    cout << "Sorted List: ";
    llist.printList(llist.head);

    return 0;
}
