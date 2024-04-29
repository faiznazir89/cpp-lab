#include<iostream>
using namespace std;
char ch;
class Fraction
{
    int num,den;
    public:
    Fraction():num(0),den(0)
    {}
    void getdata()
    {
        cout<<"Enter the fraction in the form of a/b"<<endl;
        cin>>num>>ch>>den;
    }
    void display()
    {
        cout<<num<<ch<<den;
    }
    bool operator == (Fraction f)
    {
        if(num==0&&den==1&&f.num==0&&f.den==1)
        {
            return true ;
        }
        else 
        {
            return false;
        }
    }
    bool operator != (Fraction f)
    {
        if(num!=0&&den!=1&&f.num!=0&&f.den!=1)
        {
            return true ;
        }
        else 
        {
            return false;
        }
    }
    void fractlowterms()
    {
      long tnum, tden, temp, gcd;

	tnum = labs(num);	
	tden = labs(den);	

	if(tden == 0) {	
		cout <<"Illegal fraction: division by 0";
		exit(1);
	} else if (tnum == 0) {		
		num = 0; 
		den = 1;
		return;
	}
	
	while(tnum != 0) {
		if(tnum <tden) {	
			temp = tnum;	
			tnum = tden;
			tden = temp;	
		}
		tnum = tnum - tden;		
	}
	gcd = tden;		
	num = num/gcd;		
	den = den/gcd;		
	cout <<num <<"/" <<den;
	cout <<endl;
    }
    

Fraction operator + (Fraction f)
{
    Fraction temp;
    temp.num = (num*f.den) +(f.num*den);
    temp.den = (den * f.den);
    return temp;
}
Fraction operator - (Fraction f)
{
    Fraction temp;
    temp.num = (num*f.den) -(f.num*den);
    temp.den = (den * f.den);
    return temp;
}
Fraction operator * (Fraction f)
{
    Fraction temp;
    temp.num = num * f.num;
    temp.den = den * f.den;
    return temp;
}
Fraction operator / (Fraction f)
{
    Fraction temp;
    temp.num = (num*f.den);
    temp.den = (den * f.num);
    return temp;
}
};
int main()
{
    Fraction f1,f2,f3,f4;
    f1.getdata();
    f2.getdata();
    if(f1==f2)
    {
        cout<<"termination";
        exit(1);
    }
    if(f1!=f2)
    {
    f3=f1+f2;//addition
    f3.fractlowterms();
    f3=f1-f2;//subtraction
    f3.fractlowterms();
    f3=f1*f2;//multiplication
    f3.fractlowterms();
    f3=f1/f2;
    f3.fractlowterms();
    }

}