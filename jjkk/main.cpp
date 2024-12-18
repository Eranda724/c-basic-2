#include <iostream>

using namespace std;

int main()
{
    int num1 , num2 , i , sum=0;
    char op , p='y';
    cout << "Enter first num1 = " << endl;
    cin>>num1;

     while (p=='y'){
        cout << "Enter first num2 = " << endl;
        cin>>num2;
        cout << "Enter op = " << endl;
        cin>>op;
        while(op!='+' && op!='-' && op!='/' && op!='*'){
                cout<<"invalid op";
                cout << "Enter op = " << endl;
                cin>>op;
                }

        switch(op){
            case '+':
                num1 = num1+num2;
                break;
            case '-':
                num1 = num1-num2;
                break;
            case '*':
                num1 = num1*num2;
                break;
            case '/':
                num1 = num1/num2;
                break;
        }
        //sum+=num1;


        cout<<"do you want ? ";
        cin>>p;
        }

    cout<<num1;

    return 0;
}
