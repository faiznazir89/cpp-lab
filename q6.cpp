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
    Time operator - (Time x)
    {
        Time temp;
        temp.secs = secs - x.secs;
        temp.min = min - x.min;
        temp.hrs = hrs - x.hrs;
        if(temp.secs > 59)
        {
            temp.secs = temp.secs - 60;
            temp.min++;
        }
        if(temp.min>59)
        {
            temp.min = temp.min - 60;
            temp.hrs ++;
        }
        if(temp.hrs>12)
        {
            temp.hrs =  temp.hrs - 12;
        }
        return temp;
    }
     Time operator * (float x)
   {
       Time temp;
       temp.secs = secs*x;
       temp.min = min;
       temp.hrs = hrs;
       while(temp.secs>59)
       {
           temp.secs = temp.secs - 60;
           temp.min++; 
       }
       if(temp.min>59)
       {
           temp.min = temp.min - 60;
           temp.hrs++;
       }
       if(temp.hrs>12)
       {
           temp.hrs = temp.hrs - 12;
       }
       return temp;

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
    Time t1(12,50,55);
    Time t2(3,50,00);
    Time t3;
    Time t4;
   
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
   t3 = t1- t2;
   t3.display();
   cout<<endl;
    t4 = t1 * 32;   
   t4.display();
     
    
}