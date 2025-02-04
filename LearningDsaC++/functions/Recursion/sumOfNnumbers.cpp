#include<bits/stdc++.h>
using namespace std;

int sum(int n){
    /// base case
    if(n==0){
        return 0;
    }
    /// recursive
    int smallAns = sum(n/10);

    /// calculation
    int last_digit = n%10;
    return smallAns + last_digit;
}
int main(){
    cout<<sum(12345);
    return 0;
}
