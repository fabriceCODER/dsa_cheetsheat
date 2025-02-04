#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;

    Node(int d) {
        data=d;
        next=NULL;
    }
};

void display(Node *head) {
    while(head) {
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}

Node *addAtHead(Node *head,int data) {
    Node *newNode=new Node(data);
    newNode->next=head;
    head=newNode;
    return head;
}

Node *addAtTail(Node *head,int data) {
    Node *temp=head;
    Node *newNode=new Node(data);
    if(head==NULL) {
        head=newNode;
        return head;
    }
    while(temp->next!=NULL) {
        temp=temp->next;
    }
    temp->next=newNode;
    return head;

}


int main() {
    Node *n1=new Node();
    Node *n2=new Node();
    Node *n3=new Node();
    Node *n4=new Node(40);
    Node n5(50.5);
    n1->data=10;
    n1->next=n2;
    n2->data=20;
    n2->next=n3;
    n3->data=30;
    n3->next=n4;
    n4->next=&n5;
    display(n1);
    cout<<"Adding at the beginning"<<endl;
    Node *head=addAtHead(n1,100);
    display(head);
    cout<<"Adding at the tail"<<endl;
    head=addAtTail(head,150);
    display(head);

    return 0;
}