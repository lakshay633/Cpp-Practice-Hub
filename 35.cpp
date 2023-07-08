// C++ Program To Print A Table Of Given Number Using Loop

#include <iostream>
using namespace std;
int main(){
    int a,n;
    cout<<"enter the no. whose table you want to print"<<endl;
    cin>>n;
    for (int i = 1; i < 11; i++)
    {
        a=i*n;
        cout<<n<<" x "<<i<<" = "<<a<<endl;
    }
    
    return 0;
}