#include <iostream>
using namespace std;
int main(){
    int value = 65;
    char letter = 'B';
    cout << "The following is display of formatted output" << endl;
    cout << "decimal: " << dec<<value << endl;
    cout << "octal:" << oct<<value << endl;
    cout << "hexadecimal: "<< hex<<value <<endl;
    return 0;
}
