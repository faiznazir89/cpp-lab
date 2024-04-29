#include<utility>
#include<iostream>
using namespace std;
class Stack
{
    protected:
    enum{
        MAX = 3
    };
    int st[MAX];
    int top;
    public:
    Stack()
    {
        top= -1;
    }
    void push(int var)
    {
        st[++top]=var;
    }
    int pop()
    {
        return st[top--];
    }
};
class Stack2  : public Stack 
{
    public:
    void push(int var)
    {
        if(top>=MAX-1)
        {
            cout<<"Overflow";
            exit(1);
        }
        Stack::push(var);
    }
    int pop()
    {
        if(top<0)
        {
            cout<<"Underflow";
            exit(1);
        }
        return Stack::pop();
    }
};
class PairStack : public Stack2
{
    
};
int main()
{
    Stack2 s;
    s.push(11);
    s.push(22);
    cout<<s.pop();
    cout<<s.pop();
}