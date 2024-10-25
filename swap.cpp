#include <iostream>
using namespace std;
class A
{
   public:
   int temp;
   A(int a,int b)
   {
     cout<<"before swapping , a="<<a<<"b="<<b<<endl;
       temp=a;
       a=b;
       b=temp;
       cout<<"After swapping , a="<<a<<"b="<<b<<endl;
   }
};
int main()
{
    A ob(2,3);
    return 0;
}