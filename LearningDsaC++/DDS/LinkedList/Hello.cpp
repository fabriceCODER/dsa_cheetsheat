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
Node *head = nullptr;

//Here changes to head are reflected outside the function.
void addFirst(Node **head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = *head;
    *head = newNode;
}

void addAtEnd(Node **head, int val){
    while(head){
        Node* nNode = new Node(val);
    }
}

void display(Node* head)
{
    while (head != nullptr) {
        cout << head->data << " ";
         head= head->next;
    }
}
// Main
int main()
{


    Node* root = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    root->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    head=root;
    addFirst(&head,200);
    addFirst(&head,300);
    addFirst(&head, 302);
    display(head);
    return 0;
}


