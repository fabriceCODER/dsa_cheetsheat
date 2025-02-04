#include<bits/stdc++.h>
using namespace std;

int count(int n){
    /// base
    if(n==0){
        return 0;
    }
    /// recursive
    int smallAns = count(n/10);

    /// calculation
    return smallAns + 1;

}

int main(){
    cout<<count(7820);
    return 0;
}
