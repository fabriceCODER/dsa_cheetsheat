#include<iostream>
using namespace std;

void revPrint(char input[]){
    if(input[0]=='\0'){
        return ;
    }
    revPrint(input+1);
    cout<<input[0];
}

int main(){
    char input[] = "abc";
    revPrint(input);
    return 0;
}

