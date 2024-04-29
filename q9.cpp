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
class Publication2 : public Publication
{
    int dd,mm,yyyy;
    public:
    char c;
    Publication2():dd(0),mm(0),yyyy(0)
    {}
    void getdata()
    {
        
        cout<<"Enter the date of publication in (dd/mm/yyyy) format"<<endl;
        cin>>dd>>c>>mm>>c>>yyyy;
    }
    void display()
    {
        cout<<"Date of publication : "<<dd<<c<<mm<<c<<yyyy;
    }

};

class Book : public Publication2
{
	int pagecount;
    public:
	void getdata()
	{
		Publication::getdata();
		cout<<"enter the pagrcount"<<endl;
		cin>>pagecount;
        Publication2::getdata();
	}
    void display()
		{
			Publication::display();
			cout<<"pagecount : "<<pagecount;
            Publication2::display();
		}
	

};
class Tape: public Publication2
{
	float playingtime;
  public:
  	void getdata()
  	{
		  Publication::getdata();
  		cout<<"Enter the playing time "<<endl;
  		cin>>playingtime;
          Publication2::getdata();
  	}
  	void display()
  	{
		  Publication::display();
  		cout<<"playing time : "<<playingtime;
          Publication::display();
  	}
};
int main()
{
	Publication p1;
	Tape t1;
	Book b1;
	b1.getdata();
	b1.display();
	t1.getdata();
	t1.display();
}