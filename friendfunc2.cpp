#include<iostream>
using namespace std;
 
class B;
class C;
class A
{
    private:
    int a=90;
    friend void show(B,A,C);
};
class B
{
    private:
    int d=34;
    friend void show(B,A,C);
};
class C
{
    private:
    int u=34;
    protected:
    int p =80;
    friend void show(B,A,C);
};
void show(B r1,A r2,C r3)
{
    cout<<"sum "<<r1.d+r2.a+r3.u+r3.p<<endl;
}

int main()
{
    A ob1;
    B ob2;
    C ob3;
    show(ob2,ob1,ob3);
    return 0;
}