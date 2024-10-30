#include<iostream>
using namespace std;

class A
{
    public:
    void sum(int x,int y)
    {
        cout<<"sum is "<<x+y<<endl;
    }
     void sum(int x,int y,int z)
    {
        cout<<"sum is "<<x+y+z<<endl;
    }
     void sum(int x,int y,int z,int m)
    {
        cout<<"sum is "<<x+y+z+m<<endl;
    }
};

int main()
{
    A ob;
    ob.sum(3,4);
    ob.sum(45,8,7);
    ob.sum(2,5,89,6);
    return 0;
}