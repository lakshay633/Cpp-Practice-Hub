// C++ Program To Find Quotient And Reminder Of Two Numbers Using If/Else Statements

#include <iostream>
using namespace std;
int main(){
    int a=0,b=0,q=0,r=0;
    cout<<"enter the 2 no.s "<<endl;
    cin>>a>>b;
    cout<<a<<endl;
    cout<<b<<endl;
    if (a>b && b!=0)
    {
        q=a/b;
        r=a%b;
        cout<<"The quotient is "<<q<<endl;
        cout<<"The remainder is "<<r<<endl;
    }
    else if (b>a && a!=0)
    {
        q=b/a;
        r=b%a;
        cout<<"The quotient is "<<q<<endl;
        cout<<"The remainder is "<<r<<endl;
    }
    else{
        cout<<"enter non zero denominator values"<<endl;
    }
    
    return 0;
}