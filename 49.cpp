// gcd using euclideans algo 

#include <iostream>
using namespace std;
int gcd(int a , int b){
    if (a==0)
    {
        return a;
    }
    if (b==0)
    {
        return b;
    }
    while (a!=b)
    {
        if (a>b)
        {
            a=a-b;
        }
        else
        {
            b=b-a;
        }
    }
    return a;
}
int main()
{
    int a=2,b=6;
    cout << "the gcd of "<< a<<", "<<b<< " is "<< gcd (a,b);
    return 0;
}