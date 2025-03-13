#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *next;
};
void display(Node *n) {
        while (n != nullptr) {
            cout << n->data << "";
            n = n->next;
        }
        cout << "There is no element to display!!";
    };



int main(){
    Node* head = nullptr;
    Node* second = nullptr;
    Node* third = nullptr;
    Node* fourth = nullptr;

    head = new Node();
    second = new Node();
    third = new Node();
    fourth = new Node();

    head->data = 20;
    head->next = second;
    second->data = 40;
    second->next = third;
    third->data = 60;
    third->next = fourth;
    fourth->next = nullptr;
 //Function call
    display(head);
}