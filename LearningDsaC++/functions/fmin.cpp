// CPP program to show working
// of fmin() function.
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
    double val;
    // Find minimum value when both the inputs
    // are positive.
    val = fmin(10.0, 1.0);
    cout << fixed << setprecision(4)
         << "fmin(10.0, 1.0) = " << val << "\n";
    // Find minimum value when inputs have
    // opposite sign.
    val = fmin(-10.0, 1.0);
    cout << fixed << setprecision(4)
         << "fmin(-10.0, 1.0) = " << val << "\n";
    // Find minimum value when both the inputs
    // are negative.
    val = fmin(-10.0, -1.0);
    cout << fixed << setprecision(4)
         << "fmin(-10.0, -1.0) = " << val << "\n";

    return 0;
}
