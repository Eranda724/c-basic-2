#include <iostream>

using namespace std;

int main()
{
    int n,i,j;
    cout<<"num ";
    cin>>n;
    for (i=1;i<n;i++){
        for (j=n;j>i;j--){
            cout<<"*";

    }
    cout<<endl;
    }
    return 0;
}
