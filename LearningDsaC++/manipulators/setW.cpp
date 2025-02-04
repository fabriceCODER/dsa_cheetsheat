#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
    // Initializing the integer
    int num = 50;
    cout << "Before setting the width: \n"
         << num << endl;
    // Using setw()
    cout << "Setting the width"
         << " using setw to 20: \n"
         << setw(20);
    cout << num << endl;
    return 0;
}
