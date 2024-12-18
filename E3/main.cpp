#include <iostream>

using namespace std;

int main()
{
    int k;

    int Arr[12] = {7,12,34,5,18,21,9,1,45,36,16,22};
    //int err[3][4];
    for (int i=0;i<12;i++){
        for (int j=1;j<12;j++){
            if (Arr[i]>Arr[j]){
                int tmp=Arr[i];
                Arr[i]=Arr[j];
                Arr[j]=tmp;
            }
            else{
                continue;
            }
            cout<<Arr[i]<<" ";
        }
    }

    return 0;
}
