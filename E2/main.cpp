#include <iostream>
using namespace std;

int add(int x){
    if (x==0){
        return 0;
    }
    else if (x%2==1){
        add(x-1);
    }
    else if (x%2==0) {
        return x+add(x-1);
    }
}

int main() {
    int n,sum;
        cout<<"Enter = ";
        cin>>n;
        sum =add(n);
        cout<<sum;

    return 0;
}
