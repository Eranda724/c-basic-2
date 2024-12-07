#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    double x = 2.3654789d;
    cout << "Print up to 3 decimal places: " << setprecision(3)<<x<< endl;
    cout << "Print up to 3 decimal places: " << setprecision(2)<<x<< endl;
    cout << "Print up to 3 decimal places: " << setprecision(7)<<x<< endl;
}
