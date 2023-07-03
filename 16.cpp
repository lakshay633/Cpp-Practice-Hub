// C++ Program For Calculate A Simple Interest.

#include <iostream>
using namespace std;
int main(){
    float p,t,r,a,i;
    cout<<"enter principal amount "<<endl;
    cin>>p;
    cout<<"enter interest rate amount "<<endl;
    cin>>r;
    cout<<"enter time in years amount "<<endl;
    cin>>t;

    i=(p*r*t)/100;
    a=p+i;

    cout<<"the interest amount is "<<i<<endl;
    cout<<"the total amount is "<<a<<endl;
    return 0;
}