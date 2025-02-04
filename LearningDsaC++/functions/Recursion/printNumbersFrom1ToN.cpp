//
// Created by PC on 12/4/2024.
//

#include "printNumbersFrom1ToN.h"
#include<bits/stdc++.h>
using namespace std;
void print(int n){
    /// Base case
    if(n==0){
        return;    ///  mandatory printing nothing to avoid infinite loop
    }
    /// Recursive case
    print(n-1);     ///  1 2 3 4 ......n-1
    cout<<n<<endl;
    return;    /// optional
}
//printing in reverse order like 54321
void print2(int n){
    /// Base case
    if(n==0){
        return;    /// mandatory printing nothing to avoid infinite loop
    }
    cout<<n<<endl;
    /// Recursive case
    print2(n-1);     ///n-1.....2 1
    /// return;    optional
}
int main(){
    print2(5);
    return 0;
}
