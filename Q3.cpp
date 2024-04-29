#include<iostream>
using namespace std;
int main()
{
    int n,temp[n],hot=0,pleas=0,cold=0;
    cout<<"number of days"<<endl;
    cin>>n;
    cout<<"Enter the temp of "<<n<<" days"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>temp[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<temp[i]<<" is ";
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
    cout<<"Number of hot days = "<<hot<<endl;
    cout<<"Number of pleasant days = "<<pleas<<endl;
    cout<<"Number of cold days = "<<cold<<endl;
    

}