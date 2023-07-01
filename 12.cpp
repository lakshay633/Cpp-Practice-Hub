// C++ Program To Find Area And Circumference Of Circle.

#include <iostream>
using namespace std;
int main(){
    int r;
    float a,c;
    cout<<"Enter the radius of circle"<<endl;
    cin>>r;
    a=r*r*3.14;
    c=2*r*3.14;
    cout<<"The area of circle is: "<<a<<"cm^2"<<endl;
    cout<<"The circumference of circle is: "<<c<<"cm"<<endl;
    return 0;
}