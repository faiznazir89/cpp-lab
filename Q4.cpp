#include<iostream>
using namespace std;
int main()
{
    int n,q,temp[q];
    int hot=0,pleas=0,cold=0;
    double sum=0,avg;
    cout<<"number of days"<<endl;
    cin>>n;
    cout<<"Enter the temperature of "<<n<<" days"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>temp[i];
        
    }
    for(int i=0;i<n;i++)
    {
        cout<<temp[i]<<" is ";
        sum += temp[i];
        if(temp[i]>=85)
        {
            cout<<"hot day"<<endl;
            hot++;
        }
        else if((temp[i]<=84)&&(temp[i]>=60))
        {
            cout<<"pleasant day"<<endl;
            pleas++;
        }
        else if(temp[i]<60)
        {
            cout<<"cold day"<<endl;
            cold++;
        }
    }
    avg = sum/n;
    cout<<"Number of hot days = "<<hot<<endl;
    cout<<"Number of pleasant days = "<<pleas<<endl;
    cout<<"Number of cold days = "<<cold<<endl;
    cout<<"Average = "<<avg;
    
}