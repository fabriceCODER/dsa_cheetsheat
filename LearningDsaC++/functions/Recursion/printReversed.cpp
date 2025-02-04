#include<iostream>
using namespace std;
void print(char input[]){
//If the array is zero,  we don’t print
    if(input[0]=='\0'){
        return ;
    }
//Print the output
    cout<<input[0];
// Call recursion
    print(input+1);
}
int main(){
    char input[] = “RCA";
    print(input);
    return 0;
}
