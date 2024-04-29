#include<iostream>
using namespace std;
const int LEN = 80;
class Student
{
    private:
    char scholl[LEN];
    char degree[LEN];
    public:
    void getedu()
    {
        cout<<"Enter the name of university"<<endl;
        cin>>scholl;
        cout<<"Enter the highest degree earned"<<endl;
        cin>>degree;
    }
    void putedu()
    {
        cout<<"School or university "<<scholl;
        cout<<"highest degree "<<degree;
    }
};
class Employee
{
    private :
    char name[LEN];
    unsigned long number;
    public:
    void getdata()
    {
        cout<<"Enter last name"<<endl;
        cin>>name;
        cout<<"Enter number : ";
        cin>>number;
    }
    void putdata()
    {
        cout<<"Name : "<<name;
        cout<<"Number : "<<number;
    }
};
class Manager : public Employee,public Student
{
    private:
    char title[LEN];
    double dues;
    public:
    void getdata()
    {
        Employee::getdata();
        cout<<"Enter title : "<<endl;
        cin>>title;
        cout<<"Enter golf club dues "<<endl;
        cin>>dues;
        Student::getedu();
    }
    void putdata()
    {
        Employee::putdata();
        cout<<"Title : "<<title;
        cout<<"Golf club Dues "<<dues;
        Student::putedu();
    }
} ;
class Executive : public Manager
{
    int yearl;
    float share;
    public:
    Executive():yearl(0),share(0.0)
    {}
    void getdata()
    {
        Manager::getdata();
        cout<<"Enter the yearly bonus "<<endl;
        cin>>yearl;
       cout<<"Enter the  number of shares held in the company"<<endl;
       cin>>share;
    }
    void display()
    {
        Manager::putdata();
        cout<<"Yearly bonus = "<<yearl<<endl;
        cout<<"Number of shares held in company = "<<share;
    }
};
class Scientiest : public Employee,public Student
{
    private:
    int pubs;
    public:
    void getdata()
    {
        cout<<"Enter number of pubs : ";
        cin>>pubs;
        Student::getedu();
    }
    void putdata()
    {
        Employee::putdata();
        cout<<"Number of publications "<<pubs;
        Student::putedu();
    }
};
class laborer:public Employee{

};
int main()
{
    Manager m1;
    Executive e1;
    Scientiest s1,s2;
    laborer l1;
    cout << endl;
    cout << "\nEnter data for Executive 1";
e1.getdata();
//get data for
//several employees
cout << "\nEnter data for scientist 1";
s1.getdata();
cout << "\nEnter data for scientist 2";
s2.getdata();
cout << "\nEnter data for laborer 1";
l1.getdata();
cout<<"\nData on Executive";
e1.putdata();
cout << "\nData on scientist 1";
s1.putdata();
cout << "\nData on scientist 2";
s2.putdata();
cout << "\nData on laborer 1";
l1.putdata();
cout << endl;
return 0;
}


