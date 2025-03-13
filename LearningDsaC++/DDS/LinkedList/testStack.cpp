#include <iostream>
using namespace std;

class Stack(){
private:
    int *arr;
    int top;
    int capacity;

    Stack(int size){
        capacity = size;
    }
}

class push(int x){
    if(capacity == size-1){
        cout<<"Stack Overflow";
        return;
    }
    arr[++top] = x;
}

class pop(){
    if(top == -1){
        cout<<"Stack Overflow";
        return;
    }
    arr[top--];
}