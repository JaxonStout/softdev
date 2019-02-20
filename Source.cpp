#include <iostream>
using namespace  std;
 void power(int base, int to)
 {
     int wow=base;
     for(int i=0;i<to;i++)
     {
         wow=wow*base;
     }
     cout<<wow<<endl;
 };
int main()
{
    power(2,3);
}