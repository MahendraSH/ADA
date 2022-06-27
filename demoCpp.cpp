#include<iostream>
using namespace std;
template<class X> class Stack
{
    x* stack;
    int size;
    int top;
    public:
    Stack()
    {
        top=-1;
        size=10;
        stack=new x[size];
    }
    stack(int si)
    {
        top=-1;
        size=si;
        stack =new x[size];
    }
    void get_top();
    void  push(x a);
    x pop();

    
};
template<class x> Stack ::<x> 