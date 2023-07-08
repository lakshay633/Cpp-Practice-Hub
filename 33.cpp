// C++Program To Check Date Validation (Valid Or Not) Using If/Else Statements

#include<iostream>
using namespace std;

bool leapyear(int y1)
{
    //return true if year is multiple of 4 or 400 but not divisible by 100
    return (((y1%4==0)&&(y1%100!=0)) || (y1%400==0));
} 

bool Checkdate(int d, int m,int y)
{
    if(m<1 || m>12)
    {
        return false;
    }
    if(d<1 || d>31)
    {
        return false;
    }
    if(m==2)
    {
        if(leapyear(y))
        {
            return (d<=29);
        }
        else
        {
            return (d<=28);
        }
    }
    if(m==4 || m==6 || m==9 || m==11)
    {
        return(d<=30);
    }
    return true;
}

int main()
{
    int day,month,year;
    cout<<"\nEnter the day(dd) :- ";
    cin>>day;
    cout<<"\nEnter the month(mm) :- ";
    cin>>month;
    cout<<"\nEnter the year(yyyy) :- ";
    cin>>year;
    if(Checkdate(day,month,year))
    {
        cout<<"Date is valid\n";         
    }
    else
    {
        cout<<"Date is invalid\n";
    }
}