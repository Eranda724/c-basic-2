#include <iostream>

using namespace std;

int main()
{
    int i,j,a=1;
    for (i=1 ; i<=5 ; i++){
        for (j=5 ; j>i ; --j){
                //if (j<=i){
                    cout<<"*";
               // }
               // else{
                    //cout<<" ";
                //}
        }
        cout<<"\n";
    }
    return 0;
}
