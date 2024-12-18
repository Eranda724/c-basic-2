#include <iostream>

using namespace std;
int main()
{
   int a=5,b=5;
   cout<<a--;
   cout<<a;
   cout<<--a;
   b=a--;
   cout<<a;
   cout<<b;

   b=--a;
   cout<<a;
   cout<<b;

    return 0;
}
