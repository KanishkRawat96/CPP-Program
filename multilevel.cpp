#include <iostream>
using namespace std;
class A
{
  public:
  int a=98;
};
class B:A
{
  public:
  int x=a;
  int b=56;
};
class C:B
{
   public:
   void result()
   {
    cout<<"SUM is="<<x+b<<endl;
   }
};
int main()
{
    C ob;
    ob.result();
    return 0;
}