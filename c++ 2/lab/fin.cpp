    //K.J.M.U.G.S. Eranda Jayasinghe
    //2021E075
    //EC2010
    //B
    //1
    //This is my first c++ project
    //This is some details about number of grocery items he/she has in the basket
    // I certify that the code in method function main of this project is
    // entirely my own work, but I received assistance from [insert name/book/lectureslides].

#include <iostream>

using namespace std;

int main()
{
    //q3
    string name1 , name2;
    int Banana = 120 , Carrot = 140 , Mango = 200 , Dhal_packet = 500 , sum1;
    float sum =0;
    int banana,carrot,mango,dhal_packet;
    sum1= Banana + Carrot+Mango+Dhal_packet;
    cout << "Your sum is = " << sum1<<endl;

    //q4
    cout << "Please provide your name = " << endl;
    cin>>name1>>name2;
    cout << "How many Bananas do you have?" << endl;
    cin>>banana;
    sum=sum+(banana*Banana);
    cout << "How many Carrots do you have?" << endl;
    cin>>carrot;
    sum=sum+(Carrot*carrot);
    cout << "How many Mangoes do you have?" << endl;
    cin>>mango;
    sum=sum+(Mango*mango);
    cout << "How many Dhal packets do you have?" << endl;
    cin>>dhal_packet;
    sum=(sum+(Dhal_packet*dhal_packet))/1000;

    cout<<"Your name is = "<<name1;
    cout<<" "<<name2<<endl;
    cout<<"Your basket weight is = "<<sum<<"kg";
    return 0;
}
