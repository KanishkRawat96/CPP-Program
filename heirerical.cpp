#include <iostream>
using namespace std;
class A
{
  public:
  int a=98;
  int b=67;
};
class B:A
{
  public:
  void show1()
  {
     cout<<"first niumber is-"<<a<<endl;
  }
};
class C:A
{
   public:
   void show2()
   {
    cout<<"second niumber is-"<<b<<endl;
   }
};
int main()
{
    B ob1;
    C ob2;
    ob1.show1();
    ob2.show2();
    return 0;
}