// C++ Program For Converting Temperature Celsius Into Fahrenheit.

#include <iostream>
using namespace std;
int main(){
    float c,f;
    cout<< "enter the temperature in celcius"<<endl;
    cin>>c;
    f=(c*1.8)+32;
    cout<< "the temperature in fahrenheit is "<<f;
    return 0;
}