#include<iostream>
using namespace std;

int sumOfArray(int a[], int n){
    Base case
        if(n==0){
            return 0;
        }

    return a[0] + sumOfArray(a+1 , n-1);
}

int main(){
    int a[] = {1,2,3,4,5};
    cout<<sumOfArray(a, 5)<<endl;;
    return 0;
}


