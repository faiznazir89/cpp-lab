#include<iostream>
using namespace std;
const int LIMIT = 100;//size of the array
class Safearray
{
    int arr[LIMIT];
    public:
    int& operator [] (int n)
    {
        if(n<0||n>=LIMIT)
        {
            cout<<"Index out of bounds"<<endl;
            exit(1);
        }
        return arr[n];
    }

};
class Safehilo:public Safearray
{
    int lowLIM,upLIM;
    public:
    Safehilo(int a , int b)
    {
        lowLIM = a;
        upLIM = b;
        if((b-a)>LIMIT)
        {
            cout<<"Array limits exceed range"<<endl;
            exit(1);
        }
    }
    int& operator [] (int n)
    {
        if(n<lowLIM||n>upLIM)
        {
            cout<<"Index out of bounds"<<endl;
            exit(1);
        }
    Safearray::operator [] (n-lowLIM);
    }
};
int main()
{
    Safehilo s1(100,175);
    for(int i = 100;i<175;i++)
    {
        s1[i]= i*10;
    }
    for(int i = 100;i<175;i++)
    {
        int temp = s1[i];
        cout<<"Element "<<i<<" is "<<temp<<endl;
    }
}