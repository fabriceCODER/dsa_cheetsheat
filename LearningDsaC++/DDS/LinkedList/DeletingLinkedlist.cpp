#include <bits/stdc++.h>
using namespace std;
struct Node {
public:
    int data;
    Node* next;
    explicit Node(int data){
        this->data=data;
        this->next= nullptr;
    }
};

Node* insertAtHead(Node *head, int data){
    Node* newNode= new Node(data);
    newNode->next = head;
    head = newNode;
    return head;
}

void display(Node* head)
{
    while (head != nullptr) {
        cout << head->data << "->";
        head = head->next;
    }
}
// Main
int main()
{
    Node* root = nullptr;
    Node* second = nullptr;
    Node* third = nullptr;
    root = new Node(100);
    second = new Node(200);
    third = new Node(300);
    root->next=second;
    second->next=third;
    root=insertAtHead(root,250);
    display(root);
    return 0;
}


