#include<iostream>
using  namespace std;
class Publication
{
	protected:
	string Title;
	float price;
public:
	void getdata()
	{
		cout<<"Enter the title of the music"<<endl;
		cin>>Title;
		cout<<"Enter the price of the track"<<endl;
		cin>>price;
	}
		void display()
		{
			cout<<"Title : "<<Title<<endl;
			cout<<"Price : "<<price;
		}
	
};
class Sales
{
    protected:
    float s1,s2,s3;
    public:
    Sales():s1(0),s2(0),s3(0)
    {}
    void getdata()
    {
    cout<<"Enter the Ist month sale"<<endl;
    cin>>s1;
    cout<<"Enter the 2nd month sale"<<endl;
    cin>>s2;
    cout<<"Enter the 3rd month sale"<<endl;
    cin>>s3;
    }
    void display()
    {
        cout<<"First month sale : "<<s1;
        cout<<"Second month sale : "<<s2;
        cout<<"Thrid month sale : "<<s3;
    }
};
class Book : public Publication,public Sales
{
	int pagecount;
    public:
	void getdata()
	{
		Publication::getdata();
        Sales::getdata();
		cout<<"enter the pagrcount"<<endl;
		cin>>pagecount;
	}
    void display()
		{
			Publication::display();
            Sales::display();
			cout<<"pagecount : "<<pagecount;
		}
	

};
class Tape: public Publication,public Sales
{
	float playingtime;
  public:
  	void getdata()
  	{
		  Publication::getdata();
          Sales::getdata();
  		cout<<"Enter the playing time "<<endl;
  		cin>>playingtime;
  	}
  	void display()
  	{
		  Publication::display();
          Sales::display();
  		cout<<"playing time : "<<playingtime;
  	}
};
class Disk : public Publication
{
    enum type{
        CD,DVD
    };
    type choice;
    public:
    void getdata()
    {
        char a;
        Publication::getdata();
        cout<<"Enter the choice c or d"<<endl;
        cin>>a;
        if(a=='c')
        {
            choice = CD;
        }
        else if(a=='d')
        {
            choice = DVD;
        }
    }
    void display()
    {
        Publication::display();
        cout<<"Disk type : ";
        if(choice==CD)
        {
            cout<<"CD";
        }
        else if(choice==DVD)
        {
            cout<<"DVD";
        }
    }

};
int main()
{
	Publication p1;
	Tape t1;
	Book b1;
    Disk d1;
	b1.getdata();
	b1.display();
	t1.getdata();
	t1.display();
    d1.getdata();
    d1.display();

}