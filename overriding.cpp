#include<iostream>
using namespace std;

class A
{
    public:
    virtual void sum(int x,int y)
    {
        cout<<"SUM is "<<x+y<<endl;;
    }
};
class B:public A
{
    public:
    void sum(int x,int y) override
    {
        cout<<"sum is "<<x+y<<endl;;
    }
};
 
int main()
{
    A *ptr,ob;
    B ob2;
    ptr=&ob2;
    ptr->sum(34,6);
    ob2.A::sum(2,3);
    
    return 0;
}
