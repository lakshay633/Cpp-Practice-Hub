// C++ Program To Find The Gross Salary Of An Employee.

#include <iostream>
using namespace std;
int main(){
    
    int basic_pay,da,hra;
    float gross_salary;

    cout<<"Enter the basic pay of the employee :- ";
    cin>>basic_pay;
    cout<<"Enter the DA of the employee :- ";
    cin>>da;
    cout<<"Enter the HRA :- ";
    cin>>hra;

    gross_salary = basic_pay+da+hra;

    cout<<"Gross Salary of Employees :- "<<gross_salary<<endl;

    return 0;
}