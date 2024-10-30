#include<iostream>
using namespace std;

inline int fun(int x,int y)
{
    return x+y;
}
int main()
{
    int c=fun(5,7);
    cout<<"Sum is "<<c<<endl;
    return 0;
}