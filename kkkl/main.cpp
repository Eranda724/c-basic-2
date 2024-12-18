#include <iostream>

using namespace std;

int main()
{
    int x , y ;
    char t;

    do{

    cout<<"Enter num = ";
    cin>>x;
    y=x%10;

    if (x<10){
        x=0;
    }
    else{
    while (x>=10){
        x/=10;
    }}

    cout<<"first = "<<x<<endl;
    cout<<"last = "<<y<<endl;

    cout<<"cont";
    cin>>t;

    }
    while (t!='y');
    return 0;
}
