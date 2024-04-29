#include<iostream>
using namespace std;
class Int
{
    long double i;
    public:
    Int():i(0)
    {}
    Int(int n):i(n)
    {}
    void getdata()
    {
        cout<<"Enter the value";
        cin>>i;
    }
    void display()
    {
        cout<<i<<endl;
    }
    void overflow(Int x)
    {
        if(x.i >2,147,483,648 && x.i<-2,147,483,647)
        {
            cout<<"Overflow";
            exit(1);
        }
    }
    Int operator + (Int x )
    {
        Int temp;
        temp.i = i + x.i;
        cout<<"addition"<<endl;
        overflow(temp);
        return temp;
    }
     Int operator - (Int x )
    {
         Int temp;
        temp.i = i - x.i;
        cout<<"Subtraction"<<endl;
        overflow(temp);
        return temp;
        
    }
     Int operator * (Int x )
    {
         Int temp;
        temp.i = i * x.i;
        cout<<"Multiplication"<<endl;
        overflow(temp);
        return temp;
    }
     Int operator / (Int x )
    {
         Int temp;
        temp.i = i / x.i;
        cout<<"division"<<endl;
        overflow(temp);
        return temp;
    }


};
int main()
{
    Int i1,i2,i3;
    i2.getdata();
    i3.getdata();
    i1=i2+i3;
    i1.display();
    i1=i2-i3;
    i1.display();
    i1=i2*i3;
    i1.display();
    i1=i2/i3;
    i1.display();
}