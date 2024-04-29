#include<iostream>
#include<cmath>
#define pi 3.14
using namespace std;
class Polar
{
  float r,y,a,x;  
  public:
  Polar():r(0),a(0),x(0),y(0)
  {

  }
  Polar(float r1,float a1)
  {
      r=r1;
      a=a1*(pi/180);
      x=r*cos(a);
      y=r*sin(a);
  }
  void display()
  {
      cout<<"radius = "<<r<<endl<<"angle = "<<a*(pi/180)<<endl;
  }
  Polar operator + (Polar p)
  {
      Polar t;
      t.x = x +p.x;
      t.y = y + p.y;
      t.r= sqrt(t.x*t.x+t.y*t.y);
      t.a = atan(t.y/t.x);
      return t;
  }

};
int main()
{
Polar p1,p2,p3;
float r,a;
cout<<"Enter radius and angle";
cin>>r>>a;
p1= Polar(r,a);
p2=Polar(8,98);
p3= p1+p2;
p3.display();
}