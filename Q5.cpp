#include<iostream>
using namespace std;
int main()
{
    int n,emp_id[n];
    double emp_wg[n],emp_hr[n],ot_wage[n],gross_pay[n],tax = 3.625,total_pay=0,avr,hour=40.00;
    cout<<"Enter the number of Employees"<<endl;
    cin>>n;
    int i=0;
    while(i<n)
    {
        cout<<"Enter the Employee ID"<<endl;
        cin>>emp_id[i];

        cout<<"Enter the number of hours worked "<<endl;
        cin>>emp_hr[i];

        cout<<"Enter the Hourly Wage Rate "<<endl;
        cin>>emp_wg[i];
        ot_wage[i] = (emp_wg[i] * 1.5);
        i++;
    }
    cout<<"Payroll of Employees"<<endl;
    i=0;
    while(i<n)
    {
        if(emp_hr[i]>hour)
          gross_pay[i] = (hour * emp_wg[i]);
        else
          gross_pay[i] = (emp_hr[i] * emp_wg[i]);


        if(emp_hr[i]>hour)
          gross_pay[i] = gross_pay[i] + ((emp_hr[i] - hour) * ot_wage[i]);

        gross_pay[i] = gross_pay[i] - ((gross_pay[i] * tax)/100); 

        total_pay = total_pay + gross_pay[i]; 
        i++;

    }
    avr=total_pay/n;

    for(int i=0;i<n;i++)
    {
        cout<<"Gross Pay of Employee "<<emp_id[i]<<": "<<gross_pay[i]<<endl;

    }

    cout<<"Average pay = "<<avr<<endl;
    cout<<"total pay = "<<total_pay;

}