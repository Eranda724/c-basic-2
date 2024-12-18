#include <iostream>

using namespace std;

int main()
{
    float a , k;
    float mark[3][10]={{80,65,42,10,100,198,76,56,15,100},
    {75,-100,98,60,80,85,14,50,65,80},
    {125,-85,100,80,190,65,72,34,15,200}};
    for (int i=0; i<3 ;i++){
        for (int j=0; j<10 ;j++){
            a=mark[i][j];
            while (a>100 || a<0){
                cout<<"Enter valid marks for ["<<i<<"]["<<j<<"] = ";
                cin>>k;
                mark[i][j]=k;}
            if (a>=81 && a<=100){
                    cout<<mark[i][j]=4.0;
                    continue;
                }
                else if (a>=66 && a<=80){
                        cout<<mark[i][j]={3.50};
                    continue
                }
                else if (a>=46 && a<=65){
                        cout<<mark[i][j]={2.75};
                        continue
                }
                else {
                        cout<<mark[i][j]={2.5};
                        continue
                }
            }

        }

    }}
    return 0;
}
