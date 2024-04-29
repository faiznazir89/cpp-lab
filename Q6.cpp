#include<iostream>
using namespace std;
int main()
{
    int chair,guest,fact=1;
    cout<<"Enter the Number of chair\n";
    cin>>chair;
    cout<<"Enter the number of guest\n";
    cin>>guest;
    for(int i=0;i<chair;i++)
    {
        fact = fact * (guest - i);
    }
    cout<<"NUmber of possible arragements for number of guests and number of chairs : "<<fact<<endl;
}