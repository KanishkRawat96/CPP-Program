#include <iostream>
using namespace std;
class A
{
  public:
  int a=98;
};
class B
{
  public:
  int b=56;
};
class C:A,B
{
   public:
   void result()
   {
    cout<<"SUM is="<<a+b<<endl;
   }
};
int main()
{
    C ob;
    ob.result();
    return 0;
}