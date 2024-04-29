#include<iostream>
using namespace std;
class Distance
{
    int feet;
    float inches;
    public:
    Distance():feet(0),inches(0.0)
    {
    }
    Distance(int ft,float in)
    {
        feet = ft;
        inches = in;
    }
    void getdata()
    {
        cout<<"Enter feet"<<endl;
        cin>>feet;
        cout<<"Enter inches"<<endl;
        cin>>inches;
    }
    void display()
    {
        cout<<"Total  = "<<feet<<"\'"<<inches;
    }
    Distance operator - (Distance d)
    {
        Distance p;
        if(feet>d.feet)
        {
          p.feet = feet - d.feet;
            if (inches > d.inches)
            {
                p.inches = inches - d.inches;
                return p;
            }
            else if (d.inches > inches)
            {
                p.inches = d.inches - inches;
                return p;
            }
          
        }
        else if(d.feet>feet)
        {
            p.feet = d.feet - feet;
            if (inches > d.inches)
            {
                p.inches = inches - d.inches;
                return p;
            }
            else if (d.inches > inches)
            {
                p.inches = d.inches - inches;
                return p;
            } 
        }
        else if(d.feet == feet) 
        {
           p.feet = d.feet - feet;
          if (inches > d.inches)
            {
                p.inches = inches - d.inches;
                return p;
            }
            else if (d.inches > inches)
            {
                p.inches = d.inches - inches;
                return p;
            }    
        }
        
    }


};
int main()
{
    Distance d1,d2,d3;
    d1.getdata();
    d2.getdata();
    d3 = d2 - d1;
    d3.display();
}