#include <iostream>

using namespace std;

int main()
{
    int a,b,k=1;
    cout<<"Enter = ";
    cin>>a>>b;

    while (k%b!=0 || k%a!=0){
        k++;
    }
    cout<<"num is = "<<k;


    return 0;
}
