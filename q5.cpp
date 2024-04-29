#include<iostream>
using namespace std;
const char c= ':';
class Time
{
    int hrs,secs,min;
    public:
    Time():hrs(0),secs(0),min(0)
    {

    }
    Time(int h,int m, int s)
    {
        hrs = h;
        min = m;
        secs = s;
    }
    void display()
    {
        cout<<"Time = "<<hrs<<c<<min<<c<<secs;
    }
    int operator ++ ()
    {
      
      ++secs;
      if(secs>59)
      {
          secs = secs - 60;
          ++min;
      }
      if(min >59)
      {
          min = min -60;
          hrs;
      }
      if(hrs>12)
      {
          hrs = hrs -12;
      }
      return hrs,min,secs;
    }
    int operator ++ (int)
    {
      
      secs++;
      if(secs>59)
      {
          secs = secs - 60;
          min++;
      }
      if(min >59)
      {
          min = min -60;
          hrs++;
      }
      if(hrs>12)
      {
          hrs = hrs -12;
      }
      return hrs,min,secs;
    }
    int operator --()
    {
      
      --secs;
      if(secs>59)
      {
          secs = secs - 60;
         -- min;
      }
      if(min >59)
      {
          min = min -60;
          --hrs;
      }
      if(hrs>12)
      {
          hrs = hrs -12;
      }
      return hrs,min,secs;
    }
    int operator --(int)
    {
      
      secs--;
      if(secs>59)
      {
          secs = secs - 60;
          min--;
      }
      if(min >59)
      {
          min = min -60;
          hrs--;
      }
      if(hrs>12)
      {
          hrs = hrs -12;
      }
      return hrs,min,secs;
    }
    
};

int main()
{
    Time t1(12,50,00);
    Time t2(3,50,00);
    t1++;
    cout<<"post increment "<<endl;
    t1.display();
    ++t1;
    cout<<endl;
    cout<<"pre increment "<<endl;
    t1.display();
    cout<<endl;
    t2++;
   cout<<"post increment "<<endl;
   t2.display();
   cout<<endl;  
    ++t2;
    cout<<"pre increment "<<endl;
    t2.display();
    cout<<endl;
    t1--;
    cout<<"post decrement "<<endl;
    t1.display();
    cout<<endl;
    --t1;
    cout<<"pre decrement "<<endl;
    t1.display();
    cout<<endl;
    t2--;
    cout<<"post decrement "<<endl;
    t2.display();
    cout<<endl;
    --t2;
    cout<<"pre decrement "<<endl;
    t2.display();
    cout<<endl;
    
}