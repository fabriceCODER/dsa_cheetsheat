#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string str = "Rwanda Coding Academy";
    cout << str.size() << endl;
    cout << str.length() << endl;
    cout << strlen(str.c_str()) << endl;
    cout<<strlen("Rwanda Coding Academy")<<endl;
    return 0;
}
