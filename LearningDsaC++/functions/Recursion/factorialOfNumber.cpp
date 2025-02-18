#include<iostream>
using namespace std;

int fact(int n){
    ///cout<<n<<endl;
    // Step1: Best Case
    if(n < 0) return -1;
    if(n==0) return 1;
// Step 2: Assumption
    int smallerAnswer = fact(n-1);
    // Step 3: Calculation
    return n*smallerAnswer ;
}

int main(){
    int n=5;

    int answer = fact(n);
    cout<<answer <<endl;
    return 0;
}
