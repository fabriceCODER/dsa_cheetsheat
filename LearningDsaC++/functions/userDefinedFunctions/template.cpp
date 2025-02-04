#include <iostream>
using namespace std;

template <typename T>
T sum (T a, T b)
{
    return a+b;
}

int main ()
{
    int x=5,y=2;
    double n=5.0,m=2.5;
    cout << sum<int>(x,y) << '\n';
    cout << sum<double>(n,m) << '\n';
    return 0;
}
