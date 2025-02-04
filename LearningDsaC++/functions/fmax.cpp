#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
    double val;

    // Find maximum value when both the inputs
    // are positive.
    val = fmax(10.0, 1.0);
    cout << fixed << setprecision(4)
         << "fmax(10.0, 1.0) = " << val << "\n";
    // Find maximum value when inputs have
    // opposite sign.
    val = fmax(-10.0, 1.0);
    cout << fixed << setprecision(4)
         << "fmax(-10.0, 1.0) = " << val << "\n";

    // Find maximum value when both the inputs
    // are negative.
    val = fmax(-10.0, -1.0);
    cout << fixed << setprecision(4)
         << "fmax(-10.0, -1.0) = " << val << "\n";

    return 0;
}
