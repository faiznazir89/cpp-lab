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
    Time operator + (Time t)
    {
      Time p;
      p.secs = secs + t.secs;
      p.min = min + t.min;
      p.hrs = hrs + t.hrs;
      if(p.secs>59)
      {
          p.secs = p.secs - 60;
          p.min++;
      }
      if(p.min >59)
      {
          p.min = p.min -60;
          p.hrs++;
      }
      if(p.hrs>12)
      {
          p.hrs = p.hrs -12;
      }
      return p;
    }
    
};

int main()
{
    Time t1(12,50,00);
    Time t2(3,50,00);
    Time t3;
    t3 = t1 + t2;
    t3.display();
}