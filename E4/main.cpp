#include <iostream>

using namespace std;

int main()
{
    int i,j;
    int A[]={10,20,10,30,23,43,43,19,30,67};
    for (i=0;i<10;i++){
        for (j=i+1;j<10;j++){
            if (A[i]==A[j]){
                cout<<A[i]<<" ";
                break;
            }
            else {
                continue;
            }

    }
    }
    return 0;
}
