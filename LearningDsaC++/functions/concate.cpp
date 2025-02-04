#include <iostream>
#include <cstring>
using namespace std;
int main ()
{
    char str[80];
    strcpy (str,"These ");
    strcat (str,"strings ");
    strcat (str,"are ");
    strcat (str,"concatenated.");
    cout<<(str);
    return 0;
}
