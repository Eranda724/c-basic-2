    //K.J.M.U.G.S. Eranda Jayasinghe
    //2021E075
    //EC2010
    //B
    //1
    //This is my first c++ project
    //This is include any decimal number we can show different types
    // I certify that the code in method function main of this project is
    //entirely my own work, but I received assistance from [insert name/book/lectureslides].
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
