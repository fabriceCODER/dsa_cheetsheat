#include <iostream>
using namespace std;

class Node{
private:
    int data;
    Node* next;
    Node(int x){
        this->data= x;
        next = nullptr;
    }
};

class Queue{
    Node* head;
    Node* tail;
    int size;

public:
    Queue(){
        head = nullptr;
        tail = nullptr;
        size = 0;
    }
    int getSize(){
        return size;
    }
    int count(){
        //Counting logic goes here
    }
    bool isEmpty(){
        return size==0;
    }

    void enqueue(int ele){
        Node* n= new Node(ele);
        if(head == nullptr){
            head = n;
            tail = n;
        }else{
            tail->next = n;
            tail = n;
        }
        size++;
    }

    void dequeue(){
        if(isEmpty()){
            return;
        }
        Node* temp = head;
        head = head->next;
        temp->next = nullptr;
        delete temp;
        size--;
    }

    int front(){
        if(isEmpty()){
            return 0;
        }
        return head->data;
    }
    void display(){
        Node *temp = head;
        while(temp!= nullptr){
            cout<<temp->data<<"";
            temp=temp->next;
        }
    }
};

int main(){
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    q.enqueue(70);

    q.display();
    cout<<q.front()<<endl;
    q.dequeue();
    q.dequeue();
    q.dequeue();

}




