#include<iostream>
using namespace std;

class A
{
    private:
    int a=76;
    friend class F;
};
class B
{
    protected:
    int b=3;
    friend class F;
};
class C
{
    private:
    int c=9;
    friend class F;
};

class F
{
    public:
    void access(A r1,B r2,C r3)
    {
        cout<<r1.a<<endl;
        cout<<r2.b<<endl;
        cout<<r3.c<<endl;
    }
};
int main()
{
    A obj1;
    B obj2;
    C obj3;
    F obj4;
    obj4.access(obj1,obj2,obj3);
    return 0;
}