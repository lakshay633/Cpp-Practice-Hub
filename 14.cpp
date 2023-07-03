// C++ Program To Find Area Of Triangle.

#include <iostream>
#include<cmath>
using namespace std;
int main(){
    int o,a,b,c;
    float r,s;
    cout <<"Press 1 to use base height formula"<<endl;
    cout <<"Press 2 to use 3 side formula"<<endl;
    cin>>o;
    if (o==1)
    {
        cout<<"enter the values of base and height"<<endl;
        cin>>a>>b;
        r=0.5*a*b;
        cout<<"area of the triangle is "<<r<<endl;
    }
    else if (o==2)
    {
        cout<<"enter the values of 3 sides"<<endl;
        cin>>a>>b>>c;
        s=(a+b+c)/2;
        r=sqrt(s*(s-a)*(s-b)*(s-c));
        cout<<"area of the triangle is "<<r<<endl;
    }
    
    return 0;
}