// C++ Program To Find Greater No. Among given Three Number.

#include <iostream>
using namespace std;
int main(){
    int a,b,c,r;
    cin>>a>>b>>c;
    r=a;
    if (r<b)
    {
        r=b;
    }
    if (r<c)
    {
        r=c;
    }
    cout<<"the biggest no. is "<<r;
    return 0;
}