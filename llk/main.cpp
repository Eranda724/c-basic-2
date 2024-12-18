#include <iostream>

using namespace std;

int main()
{
    int i,k, arr[7] ,year , day;
    char g;
    for (i=0; i<=6; i++){
            cout<<"Enter your [ "<<i+1<<" ] number of ID "<<endl;
            cin>>k;

            arr[i]= k;
    }
    year = arr[0]*10 + arr[1];
    day = arr[2]*100 + arr[3]*10 + arr[4];
    /*cout<<"Enter your gender = ";
    cin>>g;

    cout<<year;

    whlie (day>30)}{}
    switch (dayOfTheYear){
        case 1 :

    }*/
    cout<<year<<endl;
    cout<<day;
    return 0;
}
