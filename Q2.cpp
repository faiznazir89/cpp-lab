#include<iostream>
#include<limits>
#include<cmath>
using namespace std;
int main()
{
    int small,largest,range;
    float total=0,stddev;
    small=INT_MAX;
    largest=INT_MIN;
    int n,numb[n];
    float aver,sumofsqr;
    cout<<"How many numbers are you going to enter\n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter Number "<<i+1<<":";
        cin>>numb[i];
        total=total+numb[i];
        sumofsqr += numb[i] * numb[i]; 
        if(numb[i]>largest)
        {
            largest=numb[i];
        }
        if(numb[i]<small)
        {
            small=numb[i];    
        }
    }
    aver=total/n;
    range=largest-small;
    cout<<"Smallest number = "<<small<<endl;
    cout<<"Largest number = "<<largest<<endl;
    cout<<"average = "<<aver<<endl;
    cout<<"range = "<<range<<endl;
    stddev=sqrt((sumofsqr/n) - (aver*aver));
    cout<<stddev<<endl;
    cout<<sumofsqr;
}